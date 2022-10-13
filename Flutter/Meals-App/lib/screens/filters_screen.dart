import 'package:flutter/material.dart';

import '/widgets/main_drawer.dart';

class FiltersScreen extends StatefulWidget {
  const FiltersScreen(this.currentFilters, this.saveFilters, {Key? key})
      : super(key: key);
  static const routeName = '/filters';
  final Function saveFilters;
  final Map<String, bool> currentFilters;
  @override
  State<FiltersScreen> createState() => _FiltersScreenState();
}

class _FiltersScreenState extends State<FiltersScreen> {
  var _gluteenFree = false;
  var _vegetarian = false;
  var _vegan = false;
  var _lactoseFree = false;

  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    _gluteenFree = widget.currentFilters['gluten']!;
    _vegetarian = widget.currentFilters['vegetarian']!;
    _vegan = widget.currentFilters['vegan']!;
    _lactoseFree = widget.currentFilters['lactose']!;
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Text('Your Filters'),
          actions: [
            IconButton(
              icon: const Icon(Icons.save),
              onPressed: () {
                final selectedFilters = {
                  'gluten': _gluteenFree,
                  'lactose': _lactoseFree,
                  'vegan': _vegan,
                  'vegetarian': _vegetarian,
                };
                widget.saveFilters(selectedFilters);
              },
            ),
          ],
        ),
        drawer: const MainDrawer(),
        body: Column(
          children: [
            Container(
              padding: const EdgeInsets.all(20),
              child: Text(
                'Adjust your meal selection',
                style: Theme.of(context).textTheme.headline6,
              ),
            ),
            Expanded(
              child: ListView(
                children: [
                  SwitchListTile(
                    value: _gluteenFree,
                    onChanged: (newValue) {
                      setState(() {
                        _gluteenFree = newValue;
                      });
                    },
                    title: const Text('Gluten-free'),
                    subtitle: const Text('Only include gluten-free meals'),
                    activeColor: Theme.of(context).colorScheme.secondary,
                  ),
                  SwitchListTile(
                    value: _lactoseFree,
                    onChanged: (newValue) {
                      setState(() {
                        _lactoseFree = newValue;
                      });
                    },
                    title: const Text('Lactose-free'),
                    subtitle: const Text('Only include lactose-free meals'),
                    activeColor: Theme.of(context).colorScheme.secondary,
                  ),
                  SwitchListTile(
                    value: _vegetarian,
                    onChanged: (newValue) {
                      setState(() {
                        _vegetarian = newValue;
                      });
                    },
                    title: const Text('Vegetarian'),
                    subtitle: const Text('Only include vegetarian meals'),
                    activeColor: Theme.of(context).colorScheme.secondary,
                  ),
                  SwitchListTile(
                    value: _vegan,
                    onChanged: (newValue) {
                      setState(() {
                        _vegan = newValue;
                      });
                    },
                    title: const Text('Vegan'),
                    subtitle: const Text('Only include vegan meals'),
                    activeColor: Theme.of(context).colorScheme.secondary,
                  ),
                ],
              ),
            ),
          ],
        ));
  }
}
