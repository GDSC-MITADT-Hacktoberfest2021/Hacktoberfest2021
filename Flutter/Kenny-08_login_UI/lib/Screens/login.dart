// ignore_for_file: prefer_const_constructors
import 'package:flutter/material.dart';
import '../Widget/curve.dart';

class LoginPage extends StatefulWidget {
  const LoginPage({Key? key}) : super(key: key);

  @override
  _LoginPageState createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(children: [
        Container(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height,
          color: Colors.pink[100],
        ),
        ListView(
          //   mainAxisAlignment: MainAxisAlignment.start,
          // crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            SizedBox(
              height: MediaQuery.of(context).size.height * 0.47,
            ),
            Container(
              width: MediaQuery.of(context).size.width,
              child: Column(
                children: [
                  Text(
                    "AppName",
                    style: TextStyle(
                      color: Colors.pink[800],
                      decoration: TextDecoration.none,
                      fontFamily: "Amaranth",
                      fontSize: 45,
                    ),
                  ),
                  SizedBox(height: 3.0),
                  Text(
                    "Login into your account",
                    style: TextStyle(
                      color: Colors.pink[800],
                      decoration: TextDecoration.none,
                      fontFamily: "Amaranth",
                      fontSize: 13,
                    ),
                  ),
                  SizedBox(
                    height: MediaQuery.of(context).size.height * 0.05,
                  ),
                  Padding(
                    padding: const EdgeInsets.fromLTRB(13, 0, 13, 0),
                    child: Column(
                      children: [
                        TextFormField(
                          // validator:(){},
                          // onChanged: (){},
                          style: TextStyle(
                            color: Colors.white,
                          ),
                          cursorColor: Colors.white,
                          decoration: InputDecoration(
                            suffixIcon: Icon(
                              Icons.email,
                              size: 25,
                              color: Colors.pink[800],
                            ),
                            labelStyle: TextStyle(
                                color: Colors.pink[800],
                                fontSize: 18,
                                fontFamily: "JosefinSans"),
                            labelText: 'Email id',
                            focusedBorder: OutlineInputBorder(
                              borderRadius:
                                  BorderRadius.all(Radius.circular(30.0)),
                              borderSide: BorderSide(
                                color: Colors.pink[800]!,
                                width: 3.0,
                              ),
                            ),
                            enabledBorder: OutlineInputBorder(
                              borderRadius:
                                  BorderRadius.all(Radius.circular(30.0)),
                              borderSide: BorderSide(
                                color: Colors.pink[800]!,
                                width: 3.0,
                              ),
                            ),
                          ),
                        ),
                        SizedBox(
                          height: 8,
                        ),
                        TextFormField(
                          // validator:(){},
                          // onChanged: (){},
                          style: TextStyle(
                            color: Colors.white,
                          ),
                          cursorColor: Colors.white,
                          decoration: InputDecoration(
                            suffixIcon: Icon(
                              Icons.remove_red_eye,
                              size: 25,
                              color: Colors.pink[800],
                            ),
                            labelStyle: TextStyle(
                                color: Colors.pink[800],
                                fontSize: 18,
                                fontFamily: "JosefinSans"),
                            labelText: 'Password',
                            focusedBorder: OutlineInputBorder(
                              borderRadius:
                                  BorderRadius.all(Radius.circular(30.0)),
                              borderSide: BorderSide(
                                color: Colors.pink[800]!,
                                width: 3.0,
                              ),
                            ),
                            enabledBorder: OutlineInputBorder(
                              borderRadius:
                                  BorderRadius.all(Radius.circular(30.0)),
                              borderSide: BorderSide(
                                color: Colors.pink[800]!,
                                width: 3.0,
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                  SizedBox(
                    height: MediaQuery.of(context).size.height * 0.04,
                  ),
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
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
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
                ],
              ),
            ),
          ],
        ),
        Container(
          width: MediaQuery.of(context).size.width,
          height: MediaQuery.of(context).size.height * 0.50,
          color: Colors.pink[100],
          child: CustomPaint(
            painter: BoxShadowPainter(),
            child: ClipPath(
              clipper: BottomWaveClipper(),
              child: Container(
                  decoration: BoxDecoration(
                      image: DecorationImage(
                fit: BoxFit.cover,
                image: AssetImage("assets/images/login-img.jpg"),
              ))),
              // color: Color(0xFF181621)
            ),
          ),
        ),
      ]),
    );
  }
}
