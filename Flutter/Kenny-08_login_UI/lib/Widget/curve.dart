import 'package:flutter/material.dart';

class BottomWaveClipper extends CustomClipper<Path> {
  @override
  Path getClip(Size size) {
    // set the "current point"

    var controlPoint1 = Offset(150, size.height - 150);
    var controlPoint2 = Offset(size.width - 150, size.height + 50);
    var endPoint = Offset(size.width, size.height - 60);

    Path path = Path()
      ..lineTo(0, size.height - 60)
      ..cubicTo(controlPoint1.dx, controlPoint1.dy, controlPoint2.dx,
          controlPoint2.dy, endPoint.dx, endPoint.dy)
      ..lineTo(size.width, 0)
      ..close();

    return path;
  }

  @override
  bool shouldReclip(oldCliper) => false;
}

class BoxShadowPainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    var controlPoint1 = Offset(150, size.height - 150);
    var controlPoint2 = Offset(size.width - 150, size.height + 50);
    var endPoint = Offset(size.width, size.height - 60);

    Path path = Path()
      ..lineTo(0, size.height - 60)
      ..cubicTo(controlPoint1.dx, controlPoint1.dy, controlPoint2.dx,
          controlPoint2.dy, endPoint.dx, endPoint.dy)
      ..lineTo(size.width, 0)
      ..close();

    canvas.drawShadow(path, Colors.black, 5.0, false);
  }

  @override
  bool shouldRepaint(CustomPainter oldDelegate) {
    return true;
  }
}
