import 'package:flutter/material.dart';
import 'package:shopping_app/product.dart';

class CartItem {
  String id;
  String title;
  int quantity;
  double price;
  CartItem(this.id, this.price, this.title, this.quantity);
}

class Cart with ChangeNotifier {
  Map<String, CartItem> _items = {};
  Map<String, CartItem> get items {
    return {..._items};
  }

  int get itemCount {
    //notifyListeners();
    return _items.length;
  }

  double get totalAmount {
    double total = 0;
    _items.forEach((key, value) {
      total += value.quantity * value.price;
    });
    notifyListeners();
    return total;
  }

  void addItems(String productId, String title, double amount) {
    if (_items.containsKey(productId)) {
      _items.update(
        productId,
        (pre) => CartItem(pre.id, pre.price, pre.title, pre.quantity + 1),
      );
    } else {
      _items.putIfAbsent(productId,
          () => CartItem(DateTime.now().toString(), amount, title, 1));
    }
    notifyListeners();
  }

  void removeSingleitem(String id) {
    if (_items[id]!.quantity > 1)
      _items.update(
        id,
        (value) =>
            CartItem(value.id, value.price, value.title, value.quantity - 1),
      );
    else
      _items.remove(id);
    notifyListeners();
  }

  void removeItem(String id) {
    _items.remove(id);
    notifyListeners();
  }
}
