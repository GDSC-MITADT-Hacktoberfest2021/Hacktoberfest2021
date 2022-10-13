import 'package:flutter/material.dart';

import '/widgets/meal_item.dart';
import '/models/meal.dart';

class CategoryMealScreen extends StatefulWidget {
  static const routeName = '/category-meal';

  final List<Meal> availableMeals;

  const CategoryMealScreen({
    Key? key,
    required this.availableMeals,
  }) : super(key: key);
  // CategoryMealScreen(
  //     {Key? key, required this.categoryTitle, required this.categoryId})
  //     : super(key: key);

  // final String categoryId;
  // final String categoryTitle;

  @override
  State<CategoryMealScreen> createState() => _CategoryMealScreenState();
}

class _CategoryMealScreenState extends State<CategoryMealScreen> {
  late String categoryTitle;
  late List<Meal> displayedMeal;

  // @override
  // void initState() { //runs too soon before context is even created
  //   super.initState();

  // }

  @override
  void didChangeDependencies() {
    //replacement for initState to use context
    // TODO: implement didChangeDependencies
    super.didChangeDependencies();
    final routeAgrs = ModalRoute.of(context)?.settings.arguments
        as Map<String, String>; //accessing route associated with current widget

    categoryTitle = routeAgrs['title'].toString();
    final String categoryId = routeAgrs['id'].toString();

    displayedMeal = widget.availableMeals.where((meal) {
      return meal.categories.contains(categoryId);
    }).toList();
  }

  void _removeMeal(String mealId) {
    setState(() {
      displayedMeal.removeWhere((meal) => meal.id == mealId);
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(categoryTitle),
        //leading: const Icon(Icons.line_weight),
      ),
      body: ListView.builder(
        itemBuilder: (context, idx) {
          return MealItem(
            id: displayedMeal[idx].id,
            affordability: displayedMeal[idx].affordability,
            complexity: displayedMeal[idx].complexity,
            duration: displayedMeal[idx].duration,
            imageUrl: displayedMeal[idx].imageUrl,
            title: displayedMeal[idx].title,
            removeItem: _removeMeal,
          );
        },
        itemCount: displayedMeal.length,
      ),
    );
  }
}
