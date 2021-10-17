#include <iostream>
#include <iomanip>
 
using namespace std;
int main()

#include <iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class db
{
 int roll;
 char name[20];
 char Class[10];
 char Div[10];
 char dob[10];
   char bg[3],contact[10];
   char phone[10],license[12];

   public:
   static int stdno;
   static void count()
   {
      cout<<"\nNo. of objects created: "<<stdno;
   }
 void fin(){cout<<"\nInline Function!";}

   db()
   {
       roll=0;
       strcpy(name,"Sachin");
       strcpy(Class,"I");
       strcpy(Div,"A");
      strcpy(dob,"11/11/1111");
      strcpy(bg,"A");
      strcpy(contact,"city");
      strcpy(phone,"9000000000");
      strcpy(license,"A0101010");
      ++stdno;
   }
   db(db *ob)
   {
            strcpy(name,ob->name);
      strcpy(dob,ob->dob);
      strcpy(Class,ob->Class);
       strcpy(Div,ob->Div);
      strcpy(bg,ob->bg);
      strcpy(contact,ob->contact);
      strcpy(phone,ob->phone);
      strcpy(license,ob->license);
      ++stdno;
   }
void getdata()
   {
     cout<<"\n\nEnter:name,roll,Class,Div,Dob,bg,contact,phone,license \n\n\n";
     cin>>name>>roll>>Class>>Div>>dob>>bg>>contact>>phone>>license;
   }
   friend void display(db d);
   ~db()
   {
      cout<<"\n\n"<<this->name<<"(Object) is destroyed!";
   }
};

void display(db d)
{
 cout<<"\n"<<setw(12)<<d.name<<setw(5)<<d.roll<<setw(4)<<d.Class<<setw(3)<<d.Div<<setw(12)<<d.dob<<setw(4)<<d.bg<<setw(12)<<d.contact<<" "<<setw(12)<<d.phone<<" "<<setw(12)<<" "<<d.license;
}
int db::stdno;

int main()
{
    int n,i;
    db d1,*ptr[5];
    cout<<"\nDefault values:";
    display(d1);

    d1.getdata();
    display(d1);

    db d2(&d1);
    cout<<"\n\nUse of copy constructor :\n";
    display(d2);


    cout<<"\nHow many objects u want to create?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
     ptr[i]=new db();
      ptr[i]->getdata();
    }
    cout<<"\n"<<setw(12)<<"name"<<setw(5)<<"roll"<<setw(4)<<"Class"<<setw(4)<<"Div"<<setw(12)<<"dob"<<setw(4)<<"bg"<<setw(12)<<"contact"<<setw(12)<<"phone"<<setw(12)<<"license";
   for(i=0;i<n;i++)
     display(*ptr[i]);
   db::count();
   for(i=0;i<n;i++)
   {
     delete(ptr[i]);
   }
   cout<<"\nObjects deleted!" ;
   return 0;
}