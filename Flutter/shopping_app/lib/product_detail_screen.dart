import 'package:flutter/material.dart';

class ProductDetail extends StatelessWidget {
  //const ProductDetail({Key? key}) : super(key: key);
  final String title;
  ProductDetail(this.title);
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(title),
      ),
    );
  }
}
