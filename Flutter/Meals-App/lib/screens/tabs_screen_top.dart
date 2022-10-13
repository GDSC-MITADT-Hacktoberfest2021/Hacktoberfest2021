import 'package:flutter/material.dart';
import 'package:meals_app/screens/favorites_screen.dart';

import '/screens/categories_screen.dart';

class TabsScreenTop extends StatefulWidget {
  const TabsScreenTop({Key? key}) : super(key: key);

  @override
  _TabsScreenTopState createState() => _TabsScreenTopState();
}

class _TabsScreenTopState extends State<TabsScreenTop> {
  @override
  Widget build(BuildContext context) {
    return DefaultTabController(
        //for tabs like WhatsApp

        child: Scaffold(
          appBar: AppBar(
            title: const Text('Meals App'),
            leading: const Icon(Icons.line_weight),
            elevation: 3,
            bottom: TabBar(
              indicatorColor: Theme.of(context).colorScheme.surface,
              indicatorWeight: 3.5,
              tabs: const [
                Tab(
                  icon: Icon(Icons.category),
                  text: 'Categories',
                ),
                Tab(
                  icon: Icon(Icons.star),
                  text: 'Favorites',
                ),
              ],
            ),
          ),
          body: const TabBarView(
            children: [
              CategoriesScreen(),
              // FavoritesScreen(), //uncomment and pass favorite list from main.dart
            ],
          ),
        ),
        length: 2);
  }
}
