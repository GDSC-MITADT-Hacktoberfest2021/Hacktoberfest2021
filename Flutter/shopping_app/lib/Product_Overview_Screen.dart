import 'package:flutter/material.dart';
import 'package:shopping_app/badge.dart';
import 'package:shopping_app/cart_screen.dart';
import 'package:shopping_app/user_product_screeen.dart';
import './product.dart';
import './product_item.dart';
import './products.dart';
import 'package:provider/provider.dart';
import './product.dart';
import './cart.dart';

enum FilterOptions {
  Favourite,
  All,
}

class ProductsOverviewScreen extends StatefulWidget {
  //const ProductsOverviewScreen({Key? key}) : super(key: key);
  @override
  _ProductsOverviewScreenState createState() => _ProductsOverviewScreenState();
}

var isin = true;
var isLoading = false;

class _ProductsOverviewScreenState extends State<ProductsOverviewScreen> {
  // void initState() {
  //   Provider.of<Products>(context).fetchAndSet();
  //   super.initState();
  // }

  void didChangeDependencies() {
    if (isin) {
      setState(() {
        isLoading = true;
      });
      Provider.of<Products>(context).fetchAndSet().then((value) {
        setState(() {
          isLoading = false;
        });
      });
      super.didChangeDependencies();
    }
    isin = false;
  }

  Future<void> refresh(BuildContext context) async {
    Provider.of<Products>(context, listen: false).fetchAndSet();
  }

  @override
  bool showFavs = false;
  Widget build(BuildContext context) {
    final ProductsContainer = Provider.of<Products>(context, listen: false);
    return RefreshIndicator(
      onRefresh: () => refresh(context),
      child: Scaffold(
        appBar: AppBar(
          title: Text("My Shop"),
          actions: [
            PopupMenuButton(
              onSelected: (FilterOptions selected) {
                setState(() {
                  if (selected == FilterOptions.Favourite)
                    showFavs = true;
                  else
                    showFavs = false;
                });
              },
              itemBuilder: (_) => [
                PopupMenuItem(
                  child: Text("Only Favourites"),
                  value: FilterOptions.Favourite,
                ),
                PopupMenuItem(
                  child: Text("Show All"),
                  value: FilterOptions.All,
                )
              ],
            ),
            Consumer<Cart>(
              builder: (_, cart, ch) =>
                  Badge(ch!, cart.itemCount.toString(), Colors.red),
              child: IconButton(
                icon: Icon(Icons.shopping_cart),
                onPressed: () {
                  Navigator.of(context)
                      .push(MaterialPageRoute(builder: (_) => CartScreen()));
                },
              ),
            ),
          ],
        ),
        drawer: Drawer(
          child: FlatButton(
            onPressed: () {
              Navigator.of(context).push(MaterialPageRoute(builder: (_) {
                return UserProductsScreen();
              }));
            },
            child: Text("Your products"),
          ),
        ),
        body: isLoading
            ? Center(child: CircularProgressIndicator())
            : ProductsGrid(showFavs),
      ),
    );
  }
}

class ProductsGrid extends StatelessWidget {
  final bool favs;
  ProductsGrid(this.favs);
  @override
  Widget build(BuildContext context) {
    final productsData = Provider.of<Products>(context);
    final loadedProducts = favs ? productsData.favItems : productsData.items;
    return GridView.builder(
      padding: EdgeInsets.all(10),
      gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
        crossAxisCount: 2,
        childAspectRatio: 2 / 3,
        crossAxisSpacing: 10,
        mainAxisSpacing: 10,
      ),
      itemBuilder: (ctx, i) => ChangeNotifierProvider.value(
        value: loadedProducts[i],
        child: ProductItem(),
      ),
      itemCount: loadedProducts.length,
    );
  }
}
