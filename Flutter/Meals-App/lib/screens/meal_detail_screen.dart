import 'package:flutter/material.dart';

import '../dummy_data.dart';

class MealDetail extends StatelessWidget {
  const MealDetail(this.toggleFav, this.isFav, {Key? key}) : super(key: key);
  static const routeName = '/meal-detail';

  final Function toggleFav;
  final Function isFav;

  Widget buildSectionTitle(String title, BuildContext context) {
    return Container(
      margin: const EdgeInsets.symmetric(
        vertical: 10,
      ),
      child: Text(
        title,
        style: Theme.of(context).textTheme.headline6,
      ),
    );
  }

  Widget buildWrapedContainer(BuildContext context, Widget child) {
    return Container(
      decoration: BoxDecoration(
        border: Border.all(
          color: Colors.red,
        ),
        color: Colors.white,
        borderRadius: BorderRadius.circular(10),
      ),
      padding: const EdgeInsets.all(10),
      margin: const EdgeInsets.all(10),
      height: MediaQuery.of(context).size.height * 0.3,
      width: MediaQuery.of(context).size.width * 0.9,
      child: child,
    );
  }

  @override
  Widget build(BuildContext context) {
    final mealId = ModalRoute.of(context)?.settings.arguments as String;
    final selectedMeal = DUMMY_MEALS.firstWhere(
        (meal) => meal.id == mealId); //firstWhere breaks loop when found

    return Scaffold(
      appBar: AppBar(
        title: Text(
          selectedMeal.title,
        ),
        actions: [
          IconButton(
            icon: Icon(
              isFav(mealId) ? Icons.star : Icons.star_border,
            ),
            onPressed: () => toggleFav(mealId),
          ),
        ],
        //leading: const Icon(Icons.line_weight),
      ),
      body: SingleChildScrollView(
        child: Container(
          decoration: BoxDecoration(
            color: Theme.of(context).colorScheme.secondary,
          ),
          child: Column(
            children: [
              Container(
                height: MediaQuery.of(context).size.height * 0.3,
                width: double.infinity,
                margin: const EdgeInsets.only(top: 7, bottom: 8),
                child: Image.network(
                  selectedMeal.imageUrl,
                  fit: BoxFit.cover,
                ),
                decoration: BoxDecoration(
                  border: Border.symmetric(
                    horizontal: BorderSide(
                      width: 3,
                      color: Theme.of(context).colorScheme.primary,
                    ),
                  ),
                ),
              ),
              buildSectionTitle(
                'Ingredients',
                context,
              ),
              buildWrapedContainer(
                context,
                ListView.builder(
                  itemBuilder: (ctx, idx) => Card(
                    color: Theme.of(context).colorScheme.surface,
                    elevation: 0,
                    child: Padding(
                      padding: const EdgeInsets.symmetric(
                        vertical: 5,
                        horizontal: 10,
                      ),
                      child: Text(
                        selectedMeal.ingredients[idx],
                        style: Theme.of(context).textTheme.bodyText1,
                      ),
                    ),
                  ),
                  itemCount: selectedMeal.ingredients.length,
                ),
              ),
              buildSectionTitle(
                'Steps',
                context,
              ),
              buildWrapedContainer(
                context,
                ListView.builder(
                  itemBuilder: (context, idx) => Column(
                    children: [
                      ListTile(
                        leading: CircleAvatar(
                          child: Text(
                            '#${idx + 1}',
                            style: Theme.of(context).textTheme.bodyText2,
                          ),
                          backgroundColor:
                              Theme.of(context).colorScheme.surface,
                        ),
                        title: Text(
                          selectedMeal.steps[idx],
                          style: Theme.of(context).textTheme.bodyText2,
                        ),
                      ),
                      const Divider(
                        color: Colors.black,
                        height: 10,
                      ),
                    ],
                  ),
                  itemCount: selectedMeal.steps.length,
                ),
              ),
            ],
          ),
        ),
      ),
      floatingActionButton: FloatingActionButton(
        child: const Icon(Icons.delete),
        onPressed: () {
          Navigator.pop(context, mealId);
        },
      ),
    );
  }
}
