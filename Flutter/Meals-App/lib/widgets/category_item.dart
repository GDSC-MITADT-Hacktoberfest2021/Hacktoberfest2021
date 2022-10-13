import 'package:flutter/material.dart';

import '../screens/category_meal_screen.dart';

class CategoryItem extends StatelessWidget {
  const CategoryItem(
      {Key? key, required this.title, required this.color, required this.id})
      : super(key: key);
  final String title;
  final String id;
  final Color color;

  void selectCategory(BuildContext ctx) {
    Navigator.pushNamed(
        ctx,
        // MaterialPageRoute(
        //   builder: (_) => CategoryMealScreen(
        //     categoryTitle: title,
        //     categoryId: id,
        //   ),
        //   // fullscreenDialog: true,
        // ),
        CategoryMealScreen.routeName,
        arguments: {
          'id': id,
          'title': title,
        });
  }

  @override
  Widget build(BuildContext context) {
    return InkWell(
      onTap: () => selectCategory(context),
      splashColor: Theme.of(context).colorScheme.secondary,
      borderRadius: BorderRadius.circular(15),
      child: Container(
        padding: const EdgeInsets.all(15),
        child: Text(
          title,
          style: Theme.of(context).textTheme.headline6,
        ),
        decoration: BoxDecoration(
          gradient: LinearGradient(
            colors: [
              color.withOpacity(0.55),
              color,
            ],
            begin: Alignment.topLeft,
            end: Alignment.bottomRight,
          ),
          borderRadius: BorderRadius.circular(15),
        ),
      ),
    );
  }
}
