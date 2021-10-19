import 'package:flutter/material.dart';
import 'package:tip_collector/ui/tip.dart';
final ThemeData _apptheme = appth();
ThemeData appth(){
  final ThemeData base  = ThemeData.light();
  return base.copyWith(
    textTheme:TextTheme(
     body1: TextStyle(
         fontFamily: "Beyond Wonderland"
     )
     )



    );


}

void main() => runApp(new MaterialApp(
theme: _apptheme,
  home: Bill(),
));

