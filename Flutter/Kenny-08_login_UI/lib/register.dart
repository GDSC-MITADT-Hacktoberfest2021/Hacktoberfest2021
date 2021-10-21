// ignore_for_file: prefer_const_constructors
import 'package:flutter/material.dart';
import 'curve.dart';

class RegisterPage extends StatefulWidget {
  const RegisterPage({Key? key}) : super(key: key);

  @override
  _RegisterPageState createState() => _RegisterPageState();
}

class _RegisterPageState extends State<RegisterPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Container(
            width: MediaQuery.of(context).size.width,
            height: MediaQuery.of(context).size.height,
            color: Colors.pink[100],
          ),
          Padding(
            padding: const EdgeInsets.all(12.0),
            child: ListView(
              children: [
                Column(
                  children: [
                    SizedBox(
                      height: MediaQuery.of(context).size.height * 0.20,
                    ),
                    Center(
                      child: Text(
                        "Sign Up",
                        style: TextStyle(
                          color: Colors.pink[800],
                          decoration: TextDecoration.none,
                          fontFamily: "Amaranth",
                          fontSize: 45,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: MediaQuery.of(context).size.height * 0.02,
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
                          Icons.person,
                          size: 25,
                          color: Colors.pink[800],
                        ),
                        labelStyle: TextStyle(
                            color: Colors.pink[800],
                            fontSize: 18,
                            fontFamily: "JosefinSans"),
                        labelText: 'First Name',
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
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
                          Icons.person_outline_outlined,
                          size: 25,
                          color: Colors.pink[800],
                        ),
                        labelStyle: TextStyle(
                            color: Colors.pink[800],
                            fontSize: 18,
                            fontFamily: "JosefinSans"),
                        labelText: 'Last Name',
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
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
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
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
                          Icons.remove_red_eye_outlined,
                          size: 25,
                          color: Colors.pink[800],
                        ),
                        labelStyle: TextStyle(
                            color: Colors.pink[800],
                            fontSize: 18,
                            fontFamily: "JosefinSans"),
                        labelText: 'Password',
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
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
                        labelText: 'Confirm Password',
                        focusedBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                        enabledBorder: OutlineInputBorder(
                          borderRadius: BorderRadius.all(Radius.circular(30.0)),
                          borderSide: BorderSide(
                            color: Colors.pink[800]!,
                            width: 3.0,
                          ),
                        ),
                      ),
                    ),
                    SizedBox(height: MediaQuery.of(context).size.height * 0.03),
                    ElevatedButton(
                      style: ButtonStyle(
                        padding: MaterialStateProperty.all<EdgeInsets>(
                          EdgeInsets.fromLTRB(38.0, 12.0, 38.0, 9.0),
                        ),
                        foregroundColor:
                            MaterialStateProperty.all<Color?>(Colors.pink[50]),
                        backgroundColor:
                            MaterialStateProperty.all<Color?>(Colors.pink[800]),
                        shape:
                            MaterialStateProperty.all<RoundedRectangleBorder>(
                          RoundedRectangleBorder(
                            borderRadius: BorderRadius.only(
                                topLeft: Radius.circular(20.0),
                                bottomRight: Radius.circular(20.0)),
                          ),
                        ),
                      ),
                      onPressed: () {
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) => RegisterPage()));
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
              ],
            ),
          ),
          Container(
            width: MediaQuery.of(context).size.width,
            height: MediaQuery.of(context).size.height * 0.25,
            color: Colors.pink[100],
            child: CustomPaint(
              painter: BoxShadowPainter(),
              child: ClipPath(
                clipper: BottomWaveClipper(),
                child: Container(
                    decoration: BoxDecoration(
                        image: DecorationImage(
                  fit: BoxFit.cover,
                  image: AssetImage("assets/images/register-img.jpg"),
                ))),
                // color: Color(0xFF181621)
              ),
            ),
          ),
        ],
      ),
    );
  }
}
