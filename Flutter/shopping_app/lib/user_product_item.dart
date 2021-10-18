import 'package:flutter/material.dart';
import 'package:shopping_app/edit_screen.dart';

class UserProductItem extends StatelessWidget {
  final String title;
  final String imageUrl;
  final String id;
  UserProductItem(this.imageUrl, this.title, this.id);
  @override
  Widget build(BuildContext context) {
    return SizedBox(
      height: 100,
      width: double.infinity,
      child: ListTile(
        title: Text(title),
        leading: CircleAvatar(
          backgroundImage: NetworkImage(imageUrl, scale: 1.0),
        ),
        trailing: SizedBox(
          width: 100,
          child: Row(
            children: [
              IconButton(
                  onPressed: () {
                    Navigator.of(context).push(
                      MaterialPageRoute(
                        builder: (context) {
                          return EditScreen(id);
                        },
                      ),
                    );
                  },
                  icon: Icon(Icons.edit),
                  color: Theme.of(context).primaryColor),
              IconButton(
                onPressed: () {},
                icon: Icon(Icons.delete),
                color: Theme.of(context).errorColor,
              )
            ],
          ),
        ),
      ),
    );
  }
}
