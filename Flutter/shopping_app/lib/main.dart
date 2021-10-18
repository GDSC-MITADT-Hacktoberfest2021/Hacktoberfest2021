import 'package:flutter/material.dart';
import 'package:shopping_app/auth.dart';
import 'package:shopping_app/auth_screen.dart';
import 'package:shopping_app/cart.dart';
import './Product_Overview_Screen.dart';
import './products.dart';
import 'package:provider/provider.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MultiProvider(
      providers: [
        ChangeNotifierProvider(create: (context) => Products()),
        ChangeNotifierProvider(create: (context) => Cart()),
        ChangeNotifierProvider(create: (context) => Auth())
      ],
      child: MaterialApp(
        theme: ThemeData(
          primarySwatch: Colors.purple,
          accentColor: Colors.deepOrange,
        ),
        home: AuthScreen(),
      ),
    );
  }
}
