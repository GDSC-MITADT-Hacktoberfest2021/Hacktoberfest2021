import 'package:flutter/material.dart';
import 'package:shopping_app/http_exception.dart';
import './product.dart';
import 'package:http/http.dart' as http;
import 'dart:convert';

class Products with ChangeNotifier {
  List<Product> _items = [
    // Product(
    //   id: 'p1',
    //   title: 'Red Shirt',
    //   description: 'A red shirt - it is pretty red!',
    //   price: 29.99,
    //   imageUrl:
    //       'https://cdn.pixabay.com/photo/2016/10/02/22/17/red-t-shirt-1710578_1280.jpg',
    // ),
    // Product(
    //   id: 'p2',
    //   title: 'Trousers',
    //   description: 'A nice pair of trousers.',
    //   price: 59.99,
    //   imageUrl:
    //       'https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Trousers%2C_dress_%28AM_1960.022-8%29.jpg/512px-Trousers%2C_dress_%28AM_1960.022-8%29.jpg',
    // ),
    // Product(
    //   id: 'p3',
    //   title: 'Yellow Scarf',
    //   description: 'Warm and cozy - exactly what you need for the winter.',
    //   price: 19.99,
    //   imageUrl:
    //       'https://live.staticflickr.com/4043/4438260868_cc79b3369d_z.jpg',
    // ),
    // Product(
    //   id: 'p4',
    //   title: 'A Pan',
    //   description: 'Prepare any meal you want.',
    //   price: 49.99,
    //   imageUrl:
    //       'https://upload.wikimedia.org/wikipedia/commons/thumb/1/14/Cast-Iron-Pan.jpg/1024px-Cast-Iron-Pan.jpg',
    // ),
  ];
  List<Product> get items {
    //notifyListeners();

    if (showFavouritesOnly) {
      return _items.where((ctx) => ctx.isFavourite).toList();
    }
    return [..._items];
  }

  bool showFavouritesOnly = false;
  // void showFavouritesonly() {
  //   showFavouritesOnly = true;
  //   notifyListeners();
  // }

  // void showAll() {
  //   showFavouritesOnly = false;
  //   notifyListeners();
  // }
  List<Product> get favItems {
    return _items.where((element) => element.isFavourite).toList();
  }

  Future<void> addProducts(Product product) {
    const url =
        "https://formidable-era-299508-default-rtdb.firebaseio.com/products";
    return http
        .post(Uri.parse(url),
            body: json.encode({
              'title': product.title,
              'description': product.description,
              'imageUrl': product.imageUrl,
              'price': product.price,
              'isFavourite': product.isFavourite
            }))
        .then((res) {
      print("post!" + res.statusCode.toString());
      if (product.id == '##') {
        Product temp = Product(
            id: DateTime.now().toString(),
            title: product.title,
            description: product.description,
            price: product.price,
            imageUrl: product.imageUrl);
        _items.add(temp);
        notifyListeners();
      } else {
        _items.remove(_items.firstWhere((element) => element.id == product.id));
        _items.add(product);
        notifyListeners();
      }
      if (res.statusCode >= 400) throw HttpException("Something went wrong");
    }).catchError((error) {
      print(error.toString());
      throw (error);
    });
  }

  Future<void> fetchAndSet() async {
    const url =
        "https://formidable-era-299508-default-rtdb.firebaseio.com/products.json";
    try {
      final response = await http.get(Uri.parse(url));
      final extractedDatap = json.decode(response.body) as Map<String, dynamic>;
      final List<Product> loadedProducts = [];
      extractedDatap.forEach((id, value) {
        loadedProducts.add(Product(
            description: value['description'],
            id: id,
            imageUrl: value['imageUrl'],
            price: value['price'],
            title: value['title']));
      });
      _items = loadedProducts;
      notifyListeners();
    } catch (error) {
      throw error;
    }
  }
}
