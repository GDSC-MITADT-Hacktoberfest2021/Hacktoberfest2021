import 'package:flutter/material.dart';
import './cart.dart';
import 'package:provider/provider.dart';

class Cartitem extends StatelessWidget {
  @override
  String title;
  String id;
  double price;
  int quantity;
  String productid;
  Cartitem(this.id, this.price, this.quantity, this.title, this.productid);
  Widget build(BuildContext context) {
    return Dismissible(
      key: ValueKey(id),
      direction: DismissDirection.endToStart,
      onDismissed: (direction) {
        Provider.of<Cart>(context, listen: false).removeItem(productid);
      },
      background: Container(
        color: Theme.of(context).errorColor,
      ),
      child: Card(
        margin: EdgeInsets.symmetric(horizontal: 15, vertical: 4),
        child: Padding(
          padding: EdgeInsets.all(8),
          child: ListTile(
            leading: CircleAvatar(
              child: Padding(
                  padding: EdgeInsets.all(5),
                  child: FittedBox(
                      fit: BoxFit.cover,
                      child: Text('\$ ' + price.toString()))),
            ),
            title: Text(title),
            subtitle: Text('\$ ' + (quantity * price).toString()),
            trailing: Text("${quantity}x"),
          ),
        ),
      ),
      confirmDismiss: (direction) {
        return showDialog(
            context: context,
            builder: (ctx) => AlertDialog(
                  title: Text("Are you sure?"),
                  content: Text(
                    "Do you want to remove this item?",
                  ),
                  actions: [
                    FlatButton(
                      onPressed: () {
                        Navigator.of(ctx).pop(false);
                      },
                      child: Text("No"),
                    ),
                    FlatButton(
                      onPressed: () {
                        Navigator.of(ctx).pop(true);
                      },
                      child: Text("Yes"),
                    ),
                  ],
                ));
      },
    );
  }
}
