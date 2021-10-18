import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:shopping_app/cart_item.dart';
import './cart.dart';

class CartScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    final sum = Provider.of<Cart>(context);
    return Scaffold(
      appBar: AppBar(
        title: Text("Your Cart"),
      ),
      body: Column(
        children: [
          Card(
            margin: EdgeInsets.all(15),
            child: Padding(
              padding: EdgeInsets.all(8),
              child: Row(
                children: [
                  Text(
                    "Total",
                    style: TextStyle(fontSize: 20),
                  ),
                  SizedBox(
                    width: 20,
                  ),
                  Chip(
                    label: Padding(
                        padding: EdgeInsets.all(5),
                        child:
                            FittedBox(child: Text('\$  ${sum.totalAmount}'))),
                    backgroundColor: Theme.of(context).primaryColor,
                  ),
                ],
              ),
            ),
          ),
          SizedBox(
            height: 10,
          ),
          Expanded(
            child: ListView.builder(
                itemBuilder: (context, i) => Cartitem(
                      sum.items.values.toList()[i].id,
                      sum.items.values.toList()[i].price,
                      sum.items.values.toList()[i].quantity,
                      sum.items.values.toList()[i].title,
                      sum.items.keys.toList()[i],
                    ),
                itemCount: sum.items.length),
          )
        ],
      ),
    );
  }
}
