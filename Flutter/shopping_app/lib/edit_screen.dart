import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'product.dart';
import 'products.dart';

var editedProduct =
    Product(id: '', title: '', description: '', price: 0, imageUrl: '');

class EditScreen extends StatefulWidget {
  final String pid;
  EditScreen(this.pid);
  @override
  _EditScreenState createState() => _EditScreenState();
}

class _EditScreenState extends State<EditScreen> {
  @override
  void dispose() {
    priceFocusNode.dispose();
    descriptionFocusNode.dispose();
    super.dispose();
  }

  final priceFocusNode = FocusNode();
  final descriptionFocusNode = FocusNode();
  final imageController = TextEditingController();
  final formkey = GlobalKey<FormState>();
  var isLoading = false;
  void saveform() {
    setState(() {
      isLoading = true;
    });
    formkey.currentState!.save();
    Provider.of<Products>(context, listen: false)
        .addProducts(editedProduct)
        .catchError((error) {
      return showDialog<Null>(
          context: context,
          builder: (ctx) => AlertDialog(
                  title: Text("An error occured"),
                  content: Text("Something went wrong"),
                  actions: [
                    FlatButton(
                        child: Text("Okay!"),
                        onPressed: () {
                          Navigator.of(ctx).pop();
                          print("jabba?????");
                        })
                  ]));
    }).then((value) {
      print("gabba?????");
      setState(() {
        isLoading = false;
      });
      Navigator.of(context).pop();
    });
  }

  Widget build(BuildContext context) {
    editedProduct = Product(
        id: widget.pid, title: '', description: '', price: 0, imageUrl: '');
    return Scaffold(
      appBar: AppBar(
        title: (widget.pid == '##'
            ? Text("Add new Product")
            : Text("Edit the product")),
        actions: [
          IconButton(
              onPressed: () {
                saveform();
              },
              icon: Icon(Icons.save))
        ],
      ),
      body: isLoading
          ? Center(child: CircularProgressIndicator())
          : Container(
              padding: EdgeInsets.all(10),
              child: Form(
                key: formkey,
                child: ListView(
                  padding: EdgeInsets.all(10),
                  children: [
                    TextFormField(
                      decoration: InputDecoration(labelText: "Title"),
                      textInputAction: TextInputAction.next,
                      onFieldSubmitted: (_) =>
                          FocusScope.of(context).requestFocus(priceFocusNode),
                      onSaved: (value) {
                        editedProduct = Product(
                            id: widget.pid,
                            title: value!,
                            description: editedProduct.description,
                            price: editedProduct.price,
                            imageUrl: editedProduct.imageUrl);
                      },
                    ),
                    TextFormField(
                      decoration: InputDecoration(labelText: "Price"),
                      textInputAction: TextInputAction.next,
                      keyboardType: TextInputType.number,
                      focusNode: priceFocusNode,
                      onFieldSubmitted: (_) => FocusScope.of(context)
                          .requestFocus(descriptionFocusNode),
                      onSaved: (value) {
                        editedProduct = Product(
                            id: widget.pid,
                            title: editedProduct.title,
                            description: editedProduct.description,
                            price: double.parse(value!),
                            imageUrl: editedProduct.imageUrl);
                      },
                    ),
                    TextFormField(
                      maxLines: 3,
                      decoration: InputDecoration(labelText: "Description"),
                      keyboardType: TextInputType.multiline,
                      focusNode: descriptionFocusNode,
                      onSaved: (value) {
                        editedProduct = Product(
                            id: widget.pid,
                            title: editedProduct.title,
                            description: value!,
                            price: editedProduct.price,
                            imageUrl: editedProduct.imageUrl);
                      },
                    ),
                    Row(
                      children: [
                        Container(
                          height: 100,
                          width: 100,
                          child: imageController.text.isEmpty
                              ? Text("Daal na bsdk")
                              : FittedBox(
                                  child: Image.network(imageController.text),
                                  fit: BoxFit.cover,
                                ),
                          margin: EdgeInsets.only(top: 10, right: 8),
                        ),
                        Expanded(
                          child: TextFormField(
                            decoration: InputDecoration(labelText: "Enter Url"),
                            keyboardType: TextInputType.url,
                            textInputAction: TextInputAction.done,
                            controller: imageController,
                            onFieldSubmitted: (_) {
                              saveform();
                            },
                            onSaved: (value) {
                              editedProduct = Product(
                                  id: widget.pid,
                                  title: editedProduct.title,
                                  description: editedProduct.description,
                                  price: editedProduct.price,
                                  imageUrl: value!);
                            },
                          ),
                        )
                      ],
                    )
                  ],
                ),
              ),
            ),
    );
  }
}
