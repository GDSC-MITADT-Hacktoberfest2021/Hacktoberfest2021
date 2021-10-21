import 'package:flutter/material.dart';
import 'Screens/welcome.dart';
import 'Screens/login.dart';
import 'Screens/register.dart';

class LoginApp extends StatelessWidget {
  const LoginApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'LoginApp',
      routes: {
        '/': (context)=>WelcomePage(),
        '/login': (context) => LoginPage(),
        '/register': (context)=> RegisterPage(),
      },
    );
  }
}
