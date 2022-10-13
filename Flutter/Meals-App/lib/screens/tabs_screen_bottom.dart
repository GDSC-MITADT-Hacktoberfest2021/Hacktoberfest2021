import 'package:flutter/material.dart';

import '/screens/categories_screen.dart';
import '/screens/favorites_screen.dart';
import '/widgets/main_drawer.dart';
import '/models/meal.dart';

class TabsScreenBottom extends StatefulWidget {
  const TabsScreenBottom(this.favorites, {Key? key}) : super(key: key);

  final List<Meal> favorites;
  @override
  _TabsScreenBottomState createState() => _TabsScreenBottomState();
}

class _TabsScreenBottomState extends State<TabsScreenBottom> {
  late List<Widget> _pages;
  final List<String> _titles = [
    'Categories',
    'Your Favorites',
  ];
  int _selectedPageIndex = 0;

  @override
  initState() {
    super.initState();
    _pages = [
      const CategoriesScreen(),
      FavoritesScreen(widget.favorites),
    ];
  }

  void _selectPage(int index) {
    setState(() {
      _selectedPageIndex = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(_titles[_selectedPageIndex]),
      ),
      drawer: const MainDrawer(),
      body: _pages[_selectedPageIndex],
      bottomNavigationBar: BottomNavigationBar(
        onTap: _selectPage,
        unselectedItemColor: Colors.white,
        selectedItemColor: Theme.of(context).colorScheme.surface,
        currentIndex: _selectedPageIndex,
        type: BottomNavigationBarType.shifting,
        items: [
          BottomNavigationBarItem(
            backgroundColor: Theme.of(context).colorScheme.primary,
            icon: const Icon(
              Icons.category,
            ),
            label: 'Categories',
          ),
          BottomNavigationBarItem(
            backgroundColor: Theme.of(context).colorScheme.primary,
            icon: const Icon(
              Icons.star,
            ),
            label: 'Favorites',
          ),
        ],
        backgroundColor: Theme.of(context).colorScheme.primary,
      ),
    );
  }
}
