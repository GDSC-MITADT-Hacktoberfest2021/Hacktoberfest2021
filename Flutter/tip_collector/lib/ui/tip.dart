import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class Bill extends StatefulWidget {
  @override
  _BillState createState() => _BillState();
}

class _BillState extends State<Bill> {
 int _tippercentage = 0;
 int _personcounter = 1;
 double bill_amt = 0.0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Container(
        margin: EdgeInsets.only(top: MediaQuery.of(context).size.height  * 0.1),
        alignment: Alignment.center,
        color: Colors.white,
          child: ListView(
            scrollDirection: Axis.vertical,
            padding: EdgeInsets.all(20.0),
            children: <Widget>[
              Container(
                width: 150,
                  height: 150,
                decoration: BoxDecoration(
                  color: Colors.cyan.withOpacity(0.1),
                  borderRadius: BorderRadius.circular(10.0)
                ),

                child: Center(
                  child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: <Widget>[
                    Text("Total per person",style: TextStyle(fontStyle: FontStyle.italic,fontSize: 30.0,fontWeight: FontWeight.bold,color: Colors.purple),),

                    Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Text("Rs.${ctperson(bill_amt, _personcounter, _tippercentage)}",style: TextStyle(fontStyle: FontStyle.italic,fontSize: 30.0,fontWeight: FontWeight.bold,color: Colors.cyan)),
                    )
                  ],
              ),
                ),
              ),
              Container(
                margin: EdgeInsets.only(top: 20.0),
                padding: EdgeInsets.all(12.2),
                decoration: BoxDecoration(
                  color: Colors.transparent,
                  border: Border.all(
                    color: Colors.cyanAccent.shade100,
                    style: BorderStyle.solid,
                  ),
                  borderRadius: BorderRadius.circular(10.20)
                    
                ),
                child: Column(
                  children: <Widget>[
                    TextField(
                      keyboardType: TextInputType.numberWithOptions(decimal: true),
                      style: TextStyle(color: Colors.indigo),
                      decoration: InputDecoration(
                        prefixText: "Bill amount",
                        prefixIcon: Icon(Icons.monetization_on),
                      ),
                      onChanged: (String value){
                        try{
                          bill_amt = double.parse(value);
                        }catch(exception){
                          bill_amt = 0.0;
                        }
                      }
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: <Widget>[
                        Text("split",style: TextStyle(
                          color: Colors.indigo,

                        ),),
                        Row(
                          children: <Widget>[
                            InkWell(
                              onTap: (){
                                setState(() {
                                  if(_personcounter>1)
                                    {_personcounter--;}
                                });
                              },
                              child:Container(
                               width: 40.0,
                               height: 40.0,
                               margin: EdgeInsets.all(10.0),
                               decoration: BoxDecoration(
                               borderRadius: BorderRadius.circular(7.0),
                               color: Colors.cyan.withOpacity(0.1)
                               ),

                                child: Center(child: Text("-",style: TextStyle(fontWeight: FontWeight.bold),textScaleFactor: 1.5,)),

                               )

                             ),
                             Text("$_personcounter",style: TextStyle(color: Colors.cyan,fontWeight: FontWeight.bold),),
                            InkWell(
                                onTap: (){
                                  setState(() {
                                    _personcounter++;
                                  });
                                },
                                child:Container(
                                  width: 40.0,
                                  height: 40.0,
                                  margin: EdgeInsets.all(10.0),
                                  decoration: BoxDecoration(
                                      borderRadius: BorderRadius.circular(7.0),
                                      color: Colors.cyan.withOpacity(0.1)
                                  ),

                                  child: Center(child: Text("+",style: TextStyle(fontWeight: FontWeight.bold),textScaleFactor: 1.5,)),

                                )

                            )
                               ],
                        )
                      ],
                    ),
                   Row(
                     mainAxisAlignment: MainAxisAlignment.spaceBetween,
                     children: <Widget>[
                       Text("Tip",style: TextStyle(
                         color: Colors.indigo,
                       ),),
                       Text("Rs.${cttip(bill_amt, _personcounter, _tippercentage)}",style: TextStyle(color: Colors.cyan,fontWeight: FontWeight.bold,fontSize: 17.0),)


                     ],
                   ),
                    Column(
                     children: <Widget>[
                     Text("$_tippercentage %",style: TextStyle(color: Colors.cyan,fontSize: 17.0,fontWeight: FontWeight.bold),)
                     ],
                    ),
                  Slider(
                    min: 0,
                      max: 100,
                      activeColor: Colors.cyan,
                      inactiveColor: Colors.grey,
                      divisions: 10,
                      value: _tippercentage.toDouble(),
                      onChanged: (double n){
                      setState(() {
                        _tippercentage=n.round();
                      });

                  })
                  ],

                ),

              )
            ],
          ),
      ),
    );
  }
  ctperson(double bill ,int split,int per){
    double totalpp = (cttip(bill, split, per)+bill)/split;
    return totalpp.toStringAsFixed(2);

  }
  cttip(double bill,int split , int per)
  {
    double ttp = 0.0;
    ttp = (bill*per)/100;
    return ttp;
  }
}
