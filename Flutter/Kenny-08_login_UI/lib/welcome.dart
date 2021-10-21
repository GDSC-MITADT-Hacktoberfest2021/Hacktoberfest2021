// ignore_for_file: prefer_const_constructors
import 'package:flutter/material.dart';
import 'package:login_app/login.dart';
import 'package:login_app/register.dart';

class WelcomePage extends StatefulWidget {
  const WelcomePage({Key? key}) : super(key: key);

  @override
  _WelcomePageState createState() => _WelcomePageState();
}

class _WelcomePageState extends State<WelcomePage> {
  @override
  Widget build(BuildContext context) {
    return Stack(
      children: [
        Container(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height,
          color: Colors.pink[100],
        ),
        Container(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height * 0.6,
          decoration: BoxDecoration(
              image: DecorationImage(
            fit: BoxFit.fitWidth,
            image: AssetImage("assets/images/welcome-img.jpg"),
          )),
        ),
        Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.start,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              SizedBox(
                height: MediaQuery.of(context).size.height * 0.55,
              ),
              Text(
                "Welcome",
                style: TextStyle(
                  color: Colors.pink[800],
                  decoration: TextDecoration.none,
                  fontFamily: "Amaranth",
                ),
              ),
              Text(
                "to the world of flirting flamingos",
                style: TextStyle(
                  color: Colors.pink[800],
                  decoration: TextDecoration.none,
                  fontFamily: "Amaranth",
                  fontSize: 13,
                ),
              ),
              SizedBox(
                height: MediaQuery.of(context).size.height * 0.1,
              ),

              // Login Button
              ElevatedButton(
                style: ButtonStyle(
                  padding: MaterialStateProperty.all<EdgeInsets>(
                    EdgeInsets.fromLTRB(48.0, 12.0, 48.0, 9.0),
                  ),
                  foregroundColor:
                      MaterialStateProperty.all<Color?>(Colors.pink[50]),
                  backgroundColor:
                      MaterialStateProperty.all<Color?>(Colors.pink[800]),
                  shape: MaterialStateProperty.all<RoundedRectangleBorder>(
                    RoundedRectangleBorder(
                      borderRadius: BorderRadius.only(
                          topLeft: Radius.circular(20.0),
                          bottomRight: Radius.circular(20.0)),
                    ),
                  ),
                ),
                onPressed: () {
                  Navigator.push(context,
                      MaterialPageRoute(builder: (context) => LoginPage()));
                },
                child: Padding(
                  padding: const EdgeInsets.all(5.0),
                  child: Text(
                    "LOGIN",
                    style: TextStyle(
                      fontFamily: 'JosefinSans',
                      fontWeight: FontWeight.bold,
                      fontSize: 18.0,
                    ),
                  ),
                ),
              ),
              SizedBox(
                height: MediaQuery.of(context).size.height * 0.02,
              ),

              // Sign up button
              ElevatedButton(
                style: ButtonStyle(
                  padding: MaterialStateProperty.all<EdgeInsets>(
                    EdgeInsets.fromLTRB(36.0, 12.0, 36.0, 9.0),
                  ),
                  foregroundColor:
                      MaterialStateProperty.all<Color?>(Colors.pink[50]),
                  backgroundColor:
                      MaterialStateProperty.all<Color?>(Colors.pink[800]),
                  shape: MaterialStateProperty.all<RoundedRectangleBorder>(
                    RoundedRectangleBorder(
                      borderRadius: BorderRadius.only(
                          topLeft: Radius.circular(20.0),
                          bottomRight: Radius.circular(20.0)),
                    ),
                  ),
                ),
                onPressed: () {
                  Navigator.push(context,
                      MaterialPageRoute(builder: (context) => RegisterPage()));
                },
                child: Padding(
                  padding: const EdgeInsets.all(5.0),
                  child: Text(
                    "REGISTER",
                    style: TextStyle(
                      fontFamily: 'JosefinSans',
                      fontWeight: FontWeight.bold,
                      fontSize: 18.0,
                    ),
                  ),
                ),
              ),
            ],
          ),
        )
      ],
    );
  }
}
