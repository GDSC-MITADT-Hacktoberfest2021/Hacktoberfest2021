import 'package:flutter/material.dart';
import '/widgets/meal_item.dart';

import '/models/meal.dart';

class FavoritesScreen extends StatelessWidget {
  FavoritesScreen(this.favoriteMeals, {Key? key}) : super(key: key);

  List<Meal> favoriteMeals;

  void _removeMeal(String mealId) {
    // setState(() {
    //   displayedMeal.removeWhere((meal) => meal.id == mealId);
    // });
  }

  @override
  Widget build(BuildContext context) {
    if (favoriteMeals.isEmpty) {
      return const Center(
        child: Text('You don\'t have any favorites yet! Start adding new!'),
      );
    } else {
      return ListView.builder(
        itemBuilder: (context, idx) {
          return MealItem(
            id: favoriteMeals[idx].id,
            affordability: favoriteMeals[idx].affordability,
            complexity: favoriteMeals[idx].complexity,
            duration: favoriteMeals[idx].duration,
            imageUrl: favoriteMeals[idx].imageUrl,
            title: favoriteMeals[idx].title,
            removeItem: _removeMeal,
          );
        },
        itemCount: favoriteMeals.length,
      );
    }
  }
}
