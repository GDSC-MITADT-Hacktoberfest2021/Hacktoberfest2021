import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:shopping_app/products.dart';
import 'package:shopping_app/user_product_item.dart';
import './product.dart';
import 'edit_screen.dart';

class UserProductsScreen extends StatelessWidget {
  const UserProductsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final productsData = Provider.of<Products>(context);
    return Scaffold(
      appBar: AppBar(
        title: Text('Your Products'),
        actions: [
          IconButton(
              onPressed: () {
                Navigator.of(context).push(
                  MaterialPageRoute(
                    builder: (context) {
                      return EditScreen("##");
                    },
                  ),
                );
              },
              icon: Icon(Icons.add))
        ],
      ),
      body: Container(
        //  height: 500,
        child: ListView.builder(
          itemBuilder: (context, i) => UserProductItem(
              productsData.items[i].imageUrl,
              productsData.items[i].title,
              productsData.items[i].id),
          itemCount: productsData.items.length,
        ),
      ),
    );
  }
}
