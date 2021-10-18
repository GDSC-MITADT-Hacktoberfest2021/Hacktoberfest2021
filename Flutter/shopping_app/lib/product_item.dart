import 'package:flutter/material.dart';
import 'package:shopping_app/cart.dart';
import './product_detail_screen.dart';
import 'package:provider/provider.dart';
import './product.dart';

class ProductItem extends StatelessWidget {
  //const ProductItem({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final product = Provider.of<Product>(context);
    final cart = Provider.of<Cart>(context);
    return GridTile(
      child: GestureDetector(
        onTap: () {
          Navigator.of(context).push(MaterialPageRoute(
              builder: (ctx) => (ProductDetail(product.title))));
        },
        child: Image.network(
          product.imageUrl,
          fit: BoxFit.cover,
        ),
      ),
      footer: ClipRRect(
        borderRadius: BorderRadius.circular(10),
        child: GridTileBar(
          leading: IconButton(
            icon: Icon(product.isFavourite
                ? Icons.favorite
                : Icons.favorite_border_outlined),
            color: Theme.of(context).accentColor,
            onPressed: product.toggleFavourite,
          ),
          trailing: IconButton(
            onPressed: () {
              cart.addItems(product.id, product.title, product.price);
              Scaffold.of(context).hideCurrentSnackBar();
              Scaffold.of(context).showSnackBar(SnackBar(
                content: Text("Added items to cart !"),
                duration: Duration(seconds: 2),
                action: SnackBarAction(
                  label: "Undo",
                  onPressed: () {
                    cart.removeSingleitem(product.id);
                  },
                ),
              ));
            },
            icon: Icon(Icons.shopping_cart),
            color: Theme.of(context).accentColor,
          ),
          backgroundColor: Colors.black87,
          title: Text(
            product.title,
            textAlign: TextAlign.center,
          ),
        ),
      ),
    );
  }
}
