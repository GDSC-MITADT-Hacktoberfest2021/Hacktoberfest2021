#include<iostream>
#include<conio.h>
#include<stdio.h>     //for getch()
#include<Windows.h>   //to change colour, move the cursor, and many more function
#include<time.h>      //for time delay()

using namespace std;
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)  //gotoxy function declaration which allows the cursor to move in the console in the xy-coordinate
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);  //this is the predefined function which use to use the function of the windows in c++ console 
}
void delay(int seconds )
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}



void element(int,int);     //function prototyping
int i,j,g;

void frame()     //to make the margins and borders for the element description
    {
    	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );    //colour handle used in C++ to add colour to the background and foreground in the text. 
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
    gotoxy(71,15);
    cout<<"*";         
    for(i=72;i<=114;i++)     //this loop moves in x-direction to make the border as in the gotoxy function x-coordinate is the variable.
     {
     gotoxy(i,15);
     cout<<"*";
     }
    cout<<"*";
    gotoxy(71,23);
       

    cout<<"-";
    for(i=72;i<=114;i++)     
     {
     gotoxy(i,23);   //this loop moves in x-direction to make the border as in the gotoxy function x-coordinate is the variable.
     cout<<"-";
     }
    cout<<"-";
    for(i=16;i<=22;i++)  //this loop moves in y-direction to make the border as in the gotoxy function x-coordinate is the variable.
     {
        

     gotoxy(71,i);
     cout<<"#";
     }
    for(i=16;i<=22;i++)  //this loop moves in y-direction to make the border as in the gotoxy function x-coordinate is the variable.
     {
     	   

     gotoxy(115,i);
     cout<<"|";
     }
         
    gotoxy(80,28);
    cout<<"Press Esc to Exit........"<<endl;
    }

void display()       //this void function is used to display all the elements in the console which we want to see at the time of execution.
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
 gotoxy(33,2);
 cout<<"MODERN PERIODIC TABLE";
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY   );
 gotoxy(8,27);
 cout<<"SOME FACTS ABOUT PERIODIC TABLE !!!"<<endl;
 gotoxy(8,28);
 cout<<"";
 gotoxy(8,30);
 cout<<"1. BOILING POINT.";
 gotoxy(8,32);
 cout<<"2. MELTING POINT.";
 gotoxy(8,34);
 cout<<"3. SYMBOLS DERIVED FROM LATIN NAMES.";
 gotoxy(8,36);
 cout<<"4. MOLECULAR WEIGHT OF ELEMENTS.";
 gotoxy(50,30);
 cout<<"5. ARRANGING ELEMENTS IN GROUP.";
 gotoxy(50,32);
 cout<<"6. ARRANGING ELEMENTS IN BLOCK.";
 gotoxy(50,34);
 cout<<"7. MNEMONIC TO REMEMBER ELEMENTS.";
 gotoxy(50,36);
 cout<<"CLICK HERE TO RETURN TO STARTING.............";
 
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
 gotoxy(100,33);
 cout<<"ARROWS TO SCROLL."<<endl;
}
 gotoxy(100,34);
 cout<<"";
 {
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
 gotoxy(100,35);
 cout<<"ENTER TO SELECT."<<endl;
}
gotoxy(100,36);
cout<<"";
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
 gotoxy(100,37);
 cout<<"ESC TO EXIT."<<endl;
}
{
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_GREEN);
gotoxy(13,5);


cout<<"H ";
}

{
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_INTENSITY);
gotoxy(13,7);
cout<<"Li";

 
gotoxy(13,9);
cout<<"Na";
gotoxy(13,11);
cout<<"K ";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( GetStdHandle( STD_INPUT_HANDLE ),BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
}
{
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_INTENSITY);

gotoxy(13,13);
cout<<"Rb";
gotoxy(13,15);
cout<<"Cs";
gotoxy(13,17);
cout<<"Fr";
}
{
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED  | BACKGROUND_GREEN );
gotoxy(16,7);
cout<<"Be";
gotoxy(16,9);
cout<<"Mg";
gotoxy(16,11);
cout<<"Ca";
gotoxy(16,13);
cout<<"Sr";
gotoxy(16,15);
cout<<"Ba";
gotoxy(16,17);
cout<<"Ra";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED  | BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(19,11);
cout<<"Sc";
gotoxy(19,13);
cout<<"Y ";
}
{
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,  BACKGROUND_RED );	
gotoxy(19,15);
cout<<"  ";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_BLUE );
gotoxy(19,17);
cout<<"  ";
}
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED  | BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(22,11);
cout<<"Ti";
gotoxy(22,13);
cout<<"Zr";
gotoxy(22,15);
cout<<"Hf";
gotoxy(22,17);
cout<<"Rf";
gotoxy(25,11);
cout<<"V ";
gotoxy(25,13);
cout<<"Nb";
gotoxy(25,15);
cout<<"Ta";
gotoxy(25,17);
cout<<"Db";
gotoxy(28,11);
cout<<"Cr";
gotoxy(28,13);
cout<<"Mo";
gotoxy(28,15);
cout<<"W ";
gotoxy(28,17);
cout<<"Sg";
gotoxy(31,11);
cout<<"Mn";
gotoxy(31,13);
cout<<"Tc";
gotoxy(31,15);
cout<<"Re";
gotoxy(31,17);
cout<<"Bh";
gotoxy(34,11);
cout<<"Fe";
gotoxy(34,13);
cout<<"Ru";
gotoxy(34,15);
cout<<"Os";
gotoxy(34,17);
cout<<"Hs";
gotoxy(37,11);
cout<<"Co";
gotoxy(37,13);
cout<<"Rh";
gotoxy(37,15);
cout<<"Ir";
gotoxy(37,17);
cout<<"Mt";
gotoxy(40,11);
cout<<"Ni";
gotoxy(40,13);
cout<<"Pd";
gotoxy(40,15);
cout<<"Pt";
gotoxy(40,17);
cout<<"Ds";
gotoxy(43,11);
cout<<"Cu";
gotoxy(43,13);
cout<<"Ag";
gotoxy(43,15);
cout<<"Au";
gotoxy(43,17);
cout<<"Rg";
gotoxy(46,11);
cout<<"Zn";
gotoxy(46,13);
cout<<"Cd";
gotoxy(46,15);
cout<<"Hg";
gotoxy(46,17);
cout<<"Cn";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_BLUE );
gotoxy(49,7);
cout<<"B ";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(49,9);
cout<<"Al";
gotoxy(49,11);
cout<<"Ga";
gotoxy(49,13);
cout<<"In";
gotoxy(49,15);
cout<<"Tl";
gotoxy(49,17);
cout<<"Nh";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_BLUE  | BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(52,7);
cout<<"C ";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_BLUE );
gotoxy(52,9);
cout<<"Si";
gotoxy(52,11);
cout<<"Ge";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(52,13);
cout<<"Sn";
gotoxy(52,15);
cout<<"Pb";
gotoxy(52,17);
cout<<"Fl";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_INTENSITY | BACKGROUND_GREEN   | BACKGROUND_BLUE );
gotoxy(55,7);
cout<<"N ";
gotoxy(55,9);
cout<<"P ";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_BLUE );
gotoxy(55,11);
cout<<"As";
gotoxy(55,13);
cout<<"Sb";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(55,15);
cout<<"Bi";
gotoxy(55,17);
cout<<"Mc";
gotoxy(58,17);
cout<<"Lv";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_BLUE  | BACKGROUND_INTENSITY | BACKGROUND_GREEN );
gotoxy(58,7);
cout<<"O ";
gotoxy(58,9);
cout<<"S ";
gotoxy(58,11);
cout<<"Se";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_BLUE );
gotoxy(58,13);
cout<<"Te";
gotoxy(58,15);
cout<<"Po";

}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_INTENSITY  );
gotoxy(61,7);
cout<<"F ";
gotoxy(61,9);
cout<<"Cl";
gotoxy(61,11);
cout<<"Br";
gotoxy(61,13);
cout<<"I ";
gotoxy(61,15);
cout<<"At";
gotoxy(61,17);
cout<<"Ts";
}
{
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_INTENSITY | BACKGROUND_RED  | BACKGROUND_BLUE );
gotoxy(64,5);
cout<<"He";
gotoxy(64,7);
cout<<"Ne";
gotoxy(64,9);
cout<<"Ar";
gotoxy(64,11);
cout<<"Kr";
gotoxy(64,13);
cout<<"Xe";
gotoxy(64,15);
cout<<"Rn";
gotoxy(64,17);
cout<<"Og";
}

{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,  BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE   );
gotoxy(9,21);
cout<<"Lanthanides";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_GREEN   );
gotoxy(22,21);
cout<<"La";
gotoxy(25,21);
cout<<"Ce";
gotoxy(28,21);
cout<<"Pr";
gotoxy(31,21);
cout<<"Nd";
gotoxy(34,21);
cout<<"Pm";
gotoxy(37,21);
cout<<"Sm";
gotoxy(40,21);
cout<<"Eu";
gotoxy(43,21);
cout<<"Gd";
gotoxy(46,21);
cout<<"Tb";
gotoxy(49,21);
cout<<"Dy";
gotoxy(52,21);
cout<<"Ho";
gotoxy(55,21);
cout<<"Er";
gotoxy(58,21);
cout<<"Tm";
gotoxy(61,21);
cout<<"Yb";
gotoxy(64,21);
cout<<"Lu";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE   );
gotoxy(9,23);
cout<<"Actinides  ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED );
gotoxy(22,23);
cout<<"Ac";
gotoxy(25,23);
cout<<"Th";
gotoxy(28,23);
cout<<"Pa";
gotoxy(31,23);
cout<<"U ";
gotoxy(34,23);
cout<<"Np";
gotoxy(37,23);
cout<<"Pu";
gotoxy(40,23);
cout<<"Am";
gotoxy(43,23);
cout<<"Cm";
gotoxy(46,23);
cout<<"Bk";
gotoxy(49,23);
cout<<"Cf";
gotoxy(52,23);
cout<<"Es";
gotoxy(55,23);
cout<<"Fm";
gotoxy(58,23);
cout<<"Md";
gotoxy(61,23);
cout<<"No";
gotoxy(64,23);
cout<<"Lr";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
	gotoxy(82,4);
	cout<<"DETAILS OF COLOUR.";
}
{
	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_INTENSITY);
	gotoxy(75,6);
	cout<<"  ";
	 HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(a,FOREGROUND_RED | FOREGROUND_INTENSITY);
	gotoxy(77,6);
	cout<<" ALKALI METALS ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED  | BACKGROUND_GREEN );
	gotoxy(75,8);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A,FOREGROUND_RED  | FOREGROUND_GREEN );
	gotoxy(77,8);
	cout<<" ALKALINE EARTH METAL ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED  | BACKGROUND_INTENSITY | BACKGROUND_GREEN );
	gotoxy(75,10);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A,FOREGROUND_RED  | FOREGROUND_INTENSITY | FOREGROUND_GREEN );
	gotoxy(77,10);
	cout<<" TRANSITION METAL ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_GREEN );
	gotoxy(75,12);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A, FOREGROUND_INTENSITY | FOREGROUND_GREEN );
	gotoxy(77,12);
	cout<<" BASIC METAL ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_BLUE );
	gotoxy(75,14);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A, FOREGROUND_INTENSITY | FOREGROUND_BLUE );
	gotoxy(77,14);
	cout<<" SEMIMETAL ";
}
{
	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_GREEN);
	gotoxy(100,6);
	cout<<"  ";
	 HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(A,FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(102,6);
	cout<<" NONMETAL ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_INTENSITY  );
	gotoxy(100,8);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A,FOREGROUND_INTENSITY  );
	gotoxy(102,8);
	cout<<" HALOGEN ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_INTENSITY | BACKGROUND_RED  | BACKGROUND_BLUE );
	gotoxy(100,10);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A,FOREGROUND_INTENSITY | FOREGROUND_RED  | FOREGROUND_BLUE );
	gotoxy(102,10);
	cout<<" NOBLE GAS ";
}
{
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED );
	gotoxy(100,12);
	cout<<"  ";
	HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A, FOREGROUND_RED ); 
	gotoxy(102,12);
	cout<<" LANTHANIDE ";
}
{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_BLUE );
	gotoxy(100,14);
	cout<<"  ";
		HANDLE A = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(A, FOREGROUND_GREEN | FOREGROUND_BLUE ); 
	gotoxy(102,14);
	cout<<" ACTINIDE ";
}
gotoxy(2,2);     
i=2;j=2;
gotoxy(i,j);

 do     //This do while loop is the main part of this display function. 
        //It allows the cursor to move in the console wherever the text is dispalyed so that we can get the info from it.
  {
  g=getch();
  if(g==80)
   {
   if(j==120) 
   j=1;
   gotoxy(i,++j);
   }
  else if(g==77)
   {
   if(i==79) 
   i=1;
   gotoxy(++i,j);
   }
  else if(g==75)
   {
   if(i==2) 
   i=120;
   gotoxy(--i,j);
   }
  else if(g==72)
   {
   if(j==2)
   j=120;
   gotoxy(i,--j);
   }
  if(g==13)
   element(i,j);
  }
  while(g!=27);
}

int main()
 {
       
	   display();
	   
 }

void element(int i,int j)       //This function is the main body the project.
//It contains all the details of each and particular element and the memory is saved in the console and is displayed when we move the cursor with the help of the keyboard. 
 {
 if(((i==13)||(i==14))&&(j==5))
    {
     
      frame();
      gotoxy(74,16);
     {
	   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  cout<<"Atomic No:               :1            "<<"\n";	
  gotoxy(74,17);
  cout<<"Symbol                   :H            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Hydrogen     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :53pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1312.0 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegetivity        :2.20         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return.....";
     }
     
    }

 else if(((i==64)||(i==65))&&(j==5))
 {
  
  frame();
  gotoxy(74,16);
  {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	
  cout<<"Atomic No:               :2            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :He           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Helium       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :31pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :2372.3 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :------       "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
}

 else if(((i==13)||(i==14))&&(j==7))
       {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN| FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :3            "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Li           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Lithium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :167pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :520.20 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.97         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }

 else if(((i==16)||(i==17))&&(j==7))
       {
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :4            "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Be           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Berryllium   "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :112pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :899.50 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.47         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }

 else if(((i==49)||(i==50))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :5            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :B            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Boron        "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :87pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :800.60 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.01         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==52)||(i==53))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :6            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :C            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Carbon       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :67pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1086.5 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.50         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==55)||(i==56))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :7            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :N            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Nitrogen     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :56pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1402.3 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :3.07         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==58)||(i==59))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :8            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :O            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Oxygen       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :48pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1313.9 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :3.50         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==61)||(i==62))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN| FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :9            "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :F            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Fluorine     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :42pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1681.0 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :3.98         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==64)||(i==65))&&(j==7))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :10           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ne           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Neon         "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :38pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :2080.7 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :---          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==13)||(i==14))&&(j==9))
       {
 //();
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :11           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Na           "<<"\n";
 gotoxy(74,18); 
 cout<<"Name                     :Sodium       "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :190pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :495.80 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.93         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }

 else if(((i==16)||(i==17))&&(j==9))
       {
 //();
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :12           "<<"\n";
 gotoxy(74,17); 
 cout<<"Symbol                   :Mg           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Magnesium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :145          "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :737.70 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electonegativity         :1.31         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return.....   ";
     }

 else if(((i==49)||(i==50))&&(j==9))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :13           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Al           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Aluminium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :118pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :577.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.61         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==52)||(i==53))&&(j==9))
 {
  //(); 
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :14           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Si           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Silicon      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :111pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :786.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.90         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==55)||(i==56))&&(j==9))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :15           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :P            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Phosphorus   "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :98pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1011.8 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.19         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==58)||(i==59))&&(j==9))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :16           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :S            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Sulphur      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :88pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :999.60 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.58         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }



 else  if(((i==61)||(i==62))&&(j==9))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :17           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Cl           "<<"\n";
  gotoxy(74,18);  
  cout<<"Name                     :Chlorine     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :79pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1251.2 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :3.16         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }



 else if(((i==64)||(i==65))&&(j==9))
 {
  //();
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :18           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ar           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Argon        "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :71pm         "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1520.6 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :---          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==13)||(i==14))&&(j==11))
       {
 //();
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :19           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :K            "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Potassium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :243pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :4188.8 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.82         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }

 else if(((i==16)||(i==17))&&(j==11))
 {
  //();
  
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No                :20           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ca           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Calcium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :194pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :589.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electonegativity         :1.04         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return.....   ";
    }
    else if(((i==19)||(i==20)) && (j==11))
{
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :21           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Sc           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Scandium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :170pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :633.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.36         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==22)||(i==23)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :22           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ti           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Titanium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :215pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :658.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.54         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==25)||(i==26)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :23           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :V            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Vanadium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :205pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :650.90 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.63         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==28)||(i==29)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :24           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Cr           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Chromium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :200pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :652.90 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.66         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==32)||(i==33)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :25           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Mn           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Manganese    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :161pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :717.30 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.55         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==34)||(i==33)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :26           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Fe           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Iron         "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :126pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :762.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.83         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......"; 
 }
 else if(((i==37)||(i==38)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :27          "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Co          "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Cobalt      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :200pm       "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :760.4 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.88        "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==40)||(i==41)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :28           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ni           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Nickel       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :163pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :737.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.91         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==43)||(i==44)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :29           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Cu           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Copper       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :128pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :745.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.90         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==46)||(i==47)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :30           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Zn           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Zinc         "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :139pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :906.40 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.65         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==49)||(i==50)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :31           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ga           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Gallium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :187pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :578.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.81         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==52||(i==53)) && (j==11)))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :32           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ge           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Germanium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :211pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :762.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.01         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==55)||(i==56)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :33           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :As           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Arsenic      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :185pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :947.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.18         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 } 
 else if(((i==58)||(i==59)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :34           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Se           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Selenium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :120pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :941.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.55         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==61)||(i==62)) && (j==11)) 
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :35           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Br           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Bromine      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :185pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1139.9 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.96         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......"; 
 } 
 else if(((i==64)||(i==65)) && (j==11))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :36           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Kr           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Krypton      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :202pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1350.8 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :3.0          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==13)||(i==14))&&(j==13))
       {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :37           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Rb           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Rubidium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :265pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :403.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.89         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }
  else if(((i==16)||(i==17)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :38           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Sr           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Strontium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :219pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :549.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :0.95         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==19)||(i==20)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :39           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Y            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Yttrium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :212pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :600.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.22         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==22)||(i==23)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :40           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Zr           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Zirconium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :206pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :640.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.33         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==25)||(i==26)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_BLUE| FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :41           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Nb           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Niobium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :198pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :652.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.6          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==28)||(i==29)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :42           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Mo           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Molybdenum   "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :190pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :684.30 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.16         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==31)||(i==32)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :43           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Tc           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Ruthenium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :183pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :702.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.9          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==34)||(i==35)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :44           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ru           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Ruthenium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :178pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :710.20 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.2          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==37)||(i==38)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :45           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Rh           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Rhodium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :173pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :719.70 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.28         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==40)||(i==41)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :46           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Pd           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Palladium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :169pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :804.40 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.20         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==43)||(i==44)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :47           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ag           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Silver       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :165pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :731.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.93         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==46)||(i==47)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :48           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Cd           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Cadmium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :161pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :867.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.69         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==49)||(i==50)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :49           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :In           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Indium       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :156pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :558.30 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.78         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==52)||(i==53)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :50           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Sn           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Tin          "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :145pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :708.60 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.96         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==55)||(i==56)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :51           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Sb           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Antimony     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :133pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :834.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.050        "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==58)||(i==59)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :52           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Te           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Tellurium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :123pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :869.30 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.1          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==61)||(i==62)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :53           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :I            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Iodine       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :115pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1008.4 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.66         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==64)||(i==65)) && (j==13))
 {
   HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :54           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Xe           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Xenon        "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :108pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1170.4 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.6          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }

 else if(((i==13)||(i==14))&&(j==15))
       {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:               :55           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Cs           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Cesium       "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :2.98pm       "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :375.70 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.79         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }
 else if(((i==16) || (i==17)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
frame();
gotoxy(74,16);
 cout<<"Atomic No:               :56           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ba           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Barium       "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :253pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :502.90 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.89         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";

 }
  else if(((i==22) || (i==23)) &&(j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
frame();
gotoxy(74,16);
 cout<<"Atomic No:               :57           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :La           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Lanthanum    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :N/A          "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :538.10 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.10         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";

 }
  else if(((i==25)||(i==26)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :58           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ce           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Cerium       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :248pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :526.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.1          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==28)||(i==29)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :59           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Pr           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Praseodymium "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :182pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :527.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.13         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==31)||(i==32)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :60           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Nd           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Neodymium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :181pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :533.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.14         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==34)||(i==35)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :61           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Pm           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Promethium   "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :183pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :540.00 KJ/mol"<<"\n";
  gotoxy(74,21);  
  cout<<"Electronegativity        :1.13         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==37)||(i==38)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :62           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Sm           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Samarium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :180pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :544.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.17         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==40)||(i==41)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :63           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Eu           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Europium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :180pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :547.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.2          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==43)||(i==44)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :64           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Gd           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Gadolinium   "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :180pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :593.40 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.20         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==46)||(i==47)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :65           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Tb           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Terbium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :177pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :565.80 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.2          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==49)||(i==50)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :66           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Dy           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Dysprosium   " <<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :178pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :573.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.22         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==52)||(i==53)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :67           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ho           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Holmium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :176pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :581.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.23         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==55)||(i==56)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :68           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Er           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Erbium       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :176pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :589.30 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.24         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==58)||(i==59)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :69           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Tm           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Thulium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :176pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :596.70 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.25         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==61)||(i==62)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :70           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Yb           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Ytterbium    "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :176pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :603.40 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.1          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==64)||(i==65)) && (j==21))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :71           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Lu           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Lutenium     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :174pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :523.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.27         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==22)||(i==23)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :72           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Hf           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Hafmium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :159pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :658.50 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.3          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==25)||(i==26)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :73           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ta           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Tantalum     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :146pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :761.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.5          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==28)||(i==29)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :74           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :W            "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Tungston     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :139pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :770.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.9          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==31)||(i==32)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :75           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Re           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Rhenium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :137pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :760.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :1.9          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==34)||(i==35)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :76           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Os           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Osmium       "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :135pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :840.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.2          "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==37)||(i==38)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :77           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Ir           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Iridium      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :136pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :880.00 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.20         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==40)||(i==41)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :78           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Pt           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Platinum     "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :175pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :864.40 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.28         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==43)||(i==44)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :79           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Au           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Gold         "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :144pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :890.10 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.54         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
 else if(((i==46)||(i==47)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
  gotoxy(74,16);
  cout<<"Atomic No:               :80           "<<"\n";
  gotoxy(74,17);
  cout<<"Symbol                   :Hg           "<<"\n";
  gotoxy(74,18);
  cout<<"Name                     :Mercury      "<<"\n";
  gotoxy(74,19);
  cout<<"Atomic Radius            :151pm        "<<"\n";
  gotoxy(74,20);
  cout<<"1st Ionisation potential :1007.1 KJ/mol"<<"\n";
  gotoxy(74,21);
  cout<<"Electronegativity        :2.00         "<<"\n";
  gotoxy(80,25);
  cout<<"Press Any Key To Return......";
 }
else if(((i==49)||(i==50)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :81           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ti           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Thallium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :156pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :589.40 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.62         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
}
else if(((i==52)||(i==53)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :82           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Pb           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Lead         "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :154pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :715.60 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :2.33         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
}
else if(((i==55)||(i==56)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :83           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Bi           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Bismuth      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :143pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :730.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :2.02         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
}
else if(((i==58)||(i==59)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :84           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Po           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Polonium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :135pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :812.10 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :2.0          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
}
else if(((i==61)||(i==62)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :85           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :At           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Astatine     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :127pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :890.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :2.2          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 
}
else if(((i==64)||(i==65)) && (j==15))
 {
  HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :86           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Rn           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Radon        "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :120pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :1037.0 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
}
 else if(((i==13)||(i==14))&&(j==17))
       {
 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16);
 cout<<"Atomic No:                :87           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                    :Fr           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                      :Francium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius             :-            "<<"\n";
 gotoxy(74,20);
  cout<<"1st Ionisation potential :380.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity         :0.7          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 }

 else if(((i==16)||(i==17))&&(j==17))
      {
       HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :88           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ra           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Radium       "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :283pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :509.30 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.9          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";  
       
      }
 else if(((i==22) ||(i==23)) && (j==23))     
 {
 	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :89           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ac           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Actinium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :499.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.1          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 }
 else if(((i==25) ||(i==26)) && (j==23))    
 {
 	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :90           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Th           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Thorium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :240pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :587.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 }
 
 else if(((i==28) ||(i==29)) && (j==23))    
 {
 	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :91           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Pa           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Parotactinium"<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :568.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.5          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";      
 }
 
 else if(((i==31) ||(i==32)) && (j==23))    
 {
 	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :92           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :U            "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Uranium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :230pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :597.60 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.38         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 }
 
 else if(((i==34) ||(i==35)) && (j==23))    
 {
 	
 	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :93           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Np           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Neptunium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :604.50 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.36         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 }
 
 else if(((i==37) ||(i==38)) && (j==23)) 
 {
 	 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :94           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Pu           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Plutonium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :175pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :584.70 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.28         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
 
	}   
	else if(((i==40) ||(i==41)) && (j==23)) 
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :95           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Am           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Americium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :244pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :578.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==43) ||(i==44)) && (j==23)) 
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :96           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Cm           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Curium       "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :581.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";  
	}
	
	else if(((i==46) ||(i==47)) && (j==23)) 
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :97           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Bk           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Berkelium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :601.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";  
	}
	
	else if(((i==49) ||(i==50)) && (j==23)) 
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :98           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Cf           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Californium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :608.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==52) ||(i==53)) && (j==23)) 
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :99           "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Es           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Einsteinium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :619.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==55) ||(i==56)) && (j==23)) 
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :100          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Fm           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Fermium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :627.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==58) ||(i==59)) && (j==23)) 
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :101          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Md           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Mendelevium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :635.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==61) ||(i==62)) && (j==23)) 
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
  frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :102          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :No           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Nobelium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :642.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==64) ||(i==65)) && (j==23)) 
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
       gotoxy(74,16);
       cout<<"Atomic No.               :103          "<<"\n";
       gotoxy(74,17);
       cout<<"Symbol                   :Lr           "<<"\n";
       gotoxy(74,18);
       cout<<"Name                     :Lawencium    "<<" \n";
       gotoxy(74,19);
       cout<<"Atomic Radius            :---          "<<"\n";
       gotoxy(74,20);
       cout<<"1st Ionisation Potential :470.00 KJ/mol"<<"\n";
       gotoxy(74,21);
       cout<<"Electonegativity         :---          "<<"\n";
       gotoxy(80,25);
       cout<<"Press Any Key To Return.....";
	}
	
	else if(((i==22) ||(i==23)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :104          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Rf           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Rutherfordium"<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :5800.0 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==25) ||(i==26)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :105          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Db           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Dubnium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :664.80 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 
	}
	
	else if(((i==28) ||(i==29)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :106          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Sg           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Seaborgium   "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :757.40 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==31) ||(i==32)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :107          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Bh           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Bohrium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :742.90 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
 
	}
	
	else if(((i==34) ||(i==35)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :108          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Hs           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Hassium      "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :733.30 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.3          "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==37) ||(i==38)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :109          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Mt           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Meitnernium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :200pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :800.80 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==40) ||(i==41)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :110          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ds           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Darmstadtium "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :118pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :955.20 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==43) ||(i==44)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :111          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Rg           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Roentgenium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :114pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :1022.7 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==46) ||(i==47)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :112          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Cn           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Copernicium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :147pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :1155.0 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==49) ||(i==50)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :113          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Nh           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Nihonium     "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :170pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :705.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==52) ||(i==53)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :114          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Fl           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Flerovium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :180pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :824.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
	
	else if(((i==55) ||(i==56)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :115          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Mc           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Moscovium    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :187pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :538.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==58) ||(i==59)) && (j==17))
	{
		 HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :116          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Lv           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Livermorium  "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :164pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :724.00 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.61         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==61) ||(i==62)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN  | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :117          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Ts           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Tennessine   "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :138pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :742.90 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :1.36         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......"; 
	}
	
	else if(((i==64) ||(i==65)) && (j==17))
	{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h,BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
 frame();
 gotoxy(74,16); 
 cout<<"Atomic No:               :118          "<<"\n";
 gotoxy(74,17);
 cout<<"Symbol                   :Og           "<<"\n";
 gotoxy(74,18);
 cout<<"Name                     :Oganesson    "<<"\n";
 gotoxy(74,19);
 cout<<"Atomic Radius            :152pm        "<<"\n";
 gotoxy(74,20);
 cout<<"1st Ionisation potential :860.10 KJ/mol"<<"\n";
 gotoxy(74,21);
 cout<<"Electronegativity        :0.00         "<<"\n";
 gotoxy(80,25);
 cout<<"Press Any Key To Return......";
	}
 else if(((i>=10)&&(i<=13))&& (j==30))
 {
 		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
 	gotoxy(9,39);
 cout<<"Element Atomic Number           Element Symbol           Element Name             Element Boiling POINT     "<<endl;
 cout<<"                                                                                                            "<<endl;
 cout<<"1                             	H	                      Hydrogen	               -252.87 degree Celcius   "<<endl;
 cout<<"2                              	He	                      Helium	               -268.93 degree Celcius   "<<endl;
 cout<<"3	                            Li	                      Lithium	                1342   degree Celcius   "<<endl;
 cout<<"4	                            Be	                      Beryllium	                2470   degree Celcius   "<<endl;
 cout<<"5	                            B	                      Boron	                    4000   degree Celcius   "<<endl;
 cout<<"6	                            C	                      Carbon	                4027   degree Celcius   "<<endl;
 cout<<"7                             	N	                      Nitrogen	               -195.79 degree Celcius   "<<endl;
 cout<<"8                            	O	                      Oxygen	               -182.9  degree Celcius   "<<endl;
 cout<<"9	                            F	                      Fluorine	              -188.12  degree Celcius   "<<endl;
 cout<<"10                            	Ne	                      Neon	                  -246.08  degree Celcius   "<<endl;
 cout<<"11	                            Na	                      Sodium	                883    degree Celcius   "<<endl;
 cout<<"12                            	Mg	                      Magnesium	                1090   degree Celcius   "<<endl;
 cout<<"13	                            Al	                      Aluminium	                2519   degree Celcius   "<<endl;
 cout<<"14                           	Si	                      Silicon	              2.9*103  degree Celcius  "<<endl;
 cout<<"15	                            P	                      Phosphorus	            280.5  degree Celcius   "<<endl;
 cout<<"16	                            S	                      Sulfur	               444.72  degree Celcius   "<<endl;
 cout<<"17                           	Cl	                      Chlorine	               -34.04  degree Celcius   "<<endl;
 cout<<"18	                            Ar	                      Argon	                   -185.8  degree Celcius   "<<endl;
 cout<<"19	                            K	                      Potassium	                 759   degree Celcius   "<<endl;
 cout<<"20                            	Ca                     	  Calcium                   1484   degree Celcius   "<<endl;
 cout<<"21	                            Sc	                      Scandium	                2830   degree Celcius   "<<endl;
 cout<<"22  	                        Ti	                      Titanium	                3287   degree Celcius   "<<endl;
 cout<<"23	                            V	                      Vanadium	                3407   degree Celcius   "<<endl;
 cout<<"24	                            Cr	                      Chromium	                2671   degree Celcius   "<<endl;
 cout<<"25	                            Mn	                      Manganese	                2061   degree Celcius   "<<endl;
 cout<<"26	                            Fe	                      Iron	                    2861   degree Celcius   "<<endl;
 cout<<"27	                            Co	                      Cobalt	                2927   degree Celcius   "<<endl;
 cout<<"28	                            Ni	                      Nickel	                2913   degree Celcius   "<<endl;
 cout<<"29	                            Cu	                      Copper	                2927   degree Celcius   "<<endl;
 cout<<"30	                            Zn	                      Zinc	                     907   degree Celcius   "<<endl;
 cout<<"31	                            Ga	                      Gallium	                2204   degree Celcius   "<<endl;
 cout<<"32	                            Ge	                      Germanium	                2820   degree Celcius   "<<endl;
 cout<<"33	                            As	                      Arsenic	                 614   degree Celcius   "<<endl;
 cout<<"34	                            Se	                      Selenium	                 685   degree Celcius   "<<endl;
 cout<<"35	                            Br	                      Bromine	                  59   degree Celcius   "<<endl;
 cout<<"36	                            Kr	                      Krypton	               -153.22 degree Celcius   "<<endl;
 cout<<"37	                            Rb	                      Rubidium	                 688   degree Celcius   "<<endl;
 cout<<"38	                            Sr	                      Strontium	                1382   degree Celcius   "<<endl;
 cout<<"39	                            Y	                      Yttrium	                3345   degree Celcius   "<<endl;
 cout<<"40	                            Zr	                      Zirconium	                4409   degree Celcius   "<<endl;
 cout<<"41	                            Nb	                      Niobium	                4744   degree Celcius   "<<endl;
 cout<<"42	                            Mo	                      Molybdenum	            4639   degree Celcius   "<<endl;
 cout<<"43	                            Tc	                      Technetium	            4265   degree Celcius   "<<endl;
 cout<<"44	                            Ru	                      Ruthenium	                4150   degree Celcius   "<<endl;
 cout<<"45	                            Rh	                      Rhodium	                3695   degree Celcius   "<<endl;
 cout<<"46	                            Pd	                      Palladium	                2963   degree Celcius   "<<endl;
 cout<<"47	                            Ag	                      Silver	                2162   degree Celcius   "<<endl;
 cout<<"48	                            Cd	                      Cadmium	                 767   degree Celcius   "<<endl;
 cout<<"49	                            In	                      Indium	                2072   degree Celcius   "<<endl;
 cout<<"50	                            Sn	                      Tin	                    2602   degree Celcius   "<<endl;
 cout<<"51	                            Sb	                      Antimony	                1587   degree Celcius   "<<endl;
 cout<<"52	                            Te	                      Tellurium	                 988   degree Celcius   "<<endl;
 cout<<"53	                            I	                      Iodine	                 184.3 degree Celcius   "<<endl;
 cout<<"54	                            Xe	                      Xenon	                    -108   degree Celcius   "<<endl;
 cout<<"55	                            Cs	                      Cesium	                 671   degree Celcius   "<<endl;
 cout<<"56	                            Ba	                      Barium	                1870   degree Celcius   "<<endl;
 cout<<"57	                            La	                      Lanthanum	                3464   degree Celcius   "<<endl;
 cout<<"58	                            Ce	                      Cerium	                3360   degree Celcius   "<<endl;
 cout<<"59	                            Pr	                      Praseodymium	            3290   degree Celcius   "<<endl;
 cout<<"60	                            Nd	                      Neodymium	               3.1*103 degree Celcius  "<<endl;
 cout<<"61	                            Pm	                      Promethium	             309   degree Celcius   "<<endl;
 cout<<"62	                            Sm	                      Samarium	                1803   degree Celcius   "<<endl;
 cout<<"63	                            Eu	                      Europium	                1527   degree Celcius   "<<endl;
 cout<<"64	                            Gd	                      Gadolinium	            3250   degree Celcius   "<<endl;
 cout<<"65	                            Tb	                      Terbium	                3230   degree Celcius   "<<endl;
 cout<<"66	                            Dy	                      Dysprosium	            2567   degree Celcius   "<<endl;
 cout<<"67	                            Ho	                      Holmium	                2700   degree Celcius   "<<endl;
 cout<<"68	                            Er	                      Erbium	                2868   degree Celcius   "<<endl;
 cout<<"69	                            Tm	                      Thulium	                1950   degree Celcius   "<<endl;
 cout<<"70	                            Yb	                      Ytterbium	                1196   degree Celcius   "<<endl; 
 cout<<"71	                            Lu	                      Lutetium	                3402   degree Celcius   "<<endl;
 cout<<"72	                            Hf	                      Hafnium	                4603   degree Celcius   "<<endl;
 cout<<"73	                            Ta	                      Tantalum	                5458   degree Celcius   "<<endl;
 cout<<"74	                            W	                      Tungsten	                5555   degree Celcius   "<<endl;
 cout<<"75	                            Re	                      Rhenium	                5596   degree Celcius   "<<endl;
 cout<<"76	                            Os	                      Osmium	                5012   degree Celcius   "<<endl;
 cout<<"77	                            Ir	                      Iridium	                4428   degree Celcius   "<<endl;
 cout<<"78	                            Pt	                      Platinum	                3825   degree Celcius   "<<endl;
 cout<<"79	                            Au	                      Gold	                    2856   degree Celcius   "<<endl;
 cout<<"80	                            Hg	                      Mercury	                356.73 degree Celcius   "<<endl;
 cout<<"81	                            Tl	                      Thallium	                1473   degree Celcius   "<<endl;
 cout<<"82	                            Pb	                      Lead	                    1749   degree Celcius   "<<endl;
 cout<<"83	                            Bi	                      Bismuth	                1564   degree Celcius   "<<endl;
 cout<<"84	                            Po	                      Polonium	                 962   degree Celcius   "<<endl;
 cout<<"85	                            At	                      Astatine	                     N/A                "<<endl;
 cout<<"86	                            Rn	                      Radon	                   -61.7   degree Celcius   "<<endl;
 cout<<"87	                            Fr	                      Francium	                     N/A                "<<endl;
 cout<<"88	                            Ra	                      Radium	                1737   degree Celcius   "<<endl;
 cout<<"89	                            Ac	                      Actinium	                3200   degree Celcius   "<<endl;
 cout<<"90	                            Th	                      Thorium	                4820   degree Celcius   "<<endl;
 cout<<"91	                            Pa	                      Protactinium	            4000   degree Celcius   "<<endl;
 cout<<"92	                            U	                      Uranium	                3927   degree Celcius   "<<endl;
 cout<<"93	                            Np	                      Neptunium	                4103   degree Celcius   "<<endl;
 cout<<"94	                            Pu	                      Plutonium	                3230   degree Celcius   "<<endl;
 cout<<"95	                            Am	                      Americium	                2011   degree Celcius   "<<endl;
 cout<<"96	                            Cm	                      Curium	                3110   degree Celcius   "<<endl;
 cout<<"97	                            Bk	                      Berkelium	                     N/A                "<<endl;
 cout<<"98	                            Cf	                      Californium	                 N/A                "<<endl;
 cout<<"99	                            Es	                      Einsteinium	                 N/A                "<<endl;
 cout<<"100	                            Fm	                      Fermium	                     N/A                "<<endl;
 cout<<"101	                            Md	                      Mendelevium	                 N/A                "<<endl;
 cout<<"102	                            No	                      Nobelium	                     N/A                "<<endl;
 cout<<"103	                            Lr	                      Lawrencium	                 N/A                "<<endl; 
 cout<<"104	                            Rf	                      Rutherfordium	                 N/A                "<<endl;
 cout<<"105	                            Db	                      Dubnium	                     N/A                "<<endl;
 cout<<"106	                            Sg	                      Seaborgium	                 N/A                "<<endl;
 cout<<"107	                            Bh	                      Bohrium	                     N/A                "<<endl;
 cout<<"108	                            Hs	                      Hassium	                     N/A                "<<endl;
 cout<<"109	                            Mt	                      Meitnerium	                 N/A                "<<endl;
 cout<<"110	                            Ds	                      Darmstadtium	                 N/A                "<<endl;
 cout<<"111	                            Rg	                      Roentgenium	                 N/A                "<<endl;
 cout<<"112	                            Cn	                      Copernicium	                 N/A                "<<endl;
 cout<<"113	                            Nh	                      Nihonium	                     N/A                "<<endl;
 cout<<"114	                            Fl	                      Flerovium	                     N/A                "<<endl;
 cout<<"115	                            Mc	                      Moscovium	                     N/A                "<<endl;
 cout<<"116	                            Lv	                      Livermorium	                 N/A                "<<endl;
 cout<<"117	                            Ts	                      Tennessine	                 N/A                "<<endl;
 cout<<"118	                            Og	                      Oganesson	                     N/A                "<<endl;
}
else if(((i>=10)&& (i<=13)) && (j==32))
{ 
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED| FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
  gotoxy(9,39);
 cout<<"Element Atomic Number          Element Symbol             Element Name              Element Melting POINT     "<<endl;
 cout<<"                                                                                                              "<<endl;
 cout<<"1                             	H	                      Hydrogen	                14.01  K                  "<<endl;
 cout<<"2                              	He	                      Helium	                  N/A                     "<<endl;
 cout<<"3	                            Li	                      Lithium	               453.69  K                  "<<endl;
 cout<<"4	                            Be	                      Beryllium	                 1560  K                  "<<endl;
 cout<<"5	                            B	                      Boron	                     2348  K                  "<<endl;
 cout<<"6	                            C	                      Carbon	                 3823  K                  "<<endl;
 cout<<"7                             	N	                      Nitrogen	                63.05  K                  "<<endl;
 cout<<"8                            	O	                      Oxygen	                 54.8  K                  "<<endl;
 cout<<"9	                            F	                      Fluorine	                 53.5  K                  "<<endl;
 cout<<"10                            	Ne	                      Neon	                    24.56  K                  "<<endl;
 cout<<"11	                            Na	                      Sodium	               370.87  K                  "<<endl;
 cout<<"12                            	Mg	                      Magnesium	                  923  K                  "<<endl;
 cout<<"13	                            Al	                      Aluminium	               933.47  K                  "<<endl;
 cout<<"14                           	Si	                      Silicon	                 1687  K                  "<<endl;
 cout<<"15	                            P	                      Phosphorus	            317.3  K                  "<<endl;
 cout<<"16	                            S	                      Sulfur	               388.36  K                  "<<endl;
 cout<<"17                           	Cl	                      Chlorine	                171.6  K                  "<<endl;
 cout<<"18	                            Ar	                      Argon	                     83.8  K                  "<<endl;
 cout<<"19	                            K	                      Potassium	               336.53  K                  "<<endl;
 cout<<"20                            	Ca                     	  Calcium                    1115  K                  "<<endl;
 cout<<"21	                            Sc	                      Scandium	                 1814  K                  "<<endl;
 cout<<"22  	                        Ti	                      Titanium	                 1941  K                  "<<endl;
 cout<<"23	                            V	                      Vanadium	                 2183  K                  "<<endl;
 cout<<"24	                            Cr	                      Chromium	                 2180  K                  "<<endl;
 cout<<"25	                            Mn	                      Manganese	                 1519  K                  "<<endl;
 cout<<"26	                            Fe	                      Iron	                     1811  K                  "<<endl;
 cout<<"27	                            Co	                      Cobalt	                 1768  K                  "<<endl;
 cout<<"28	                            Ni	                      Nickel	                 1728  K                  "<<endl;
 cout<<"29	                            Cu	                      Copper	              1357.77  K                  "<<endl;
 cout<<"30	                            Zn	                      Zinc	                   692.68  K                  "<<endl;
 cout<<"31	                            Ga	                      Gallium	               302.91  K                  "<<endl;
 cout<<"32	                            Ge	                      Germanium	               1211.4  K                  "<<endl;
 cout<<"33	                            As	                      Arsenic	                 1090  K                  "<<endl;
 cout<<"34	                            Se	                      Selenium	                  494  K                  "<<endl;
 cout<<"35	                            Br	                      Bromine	                265.5  K                  "<<endl;
 cout<<"36	                            Kr	                      Krypton	               115.79  K                  "<<endl;
 cout<<"37	                            Rb	                      Rubidium	               312.46  K                  "<<endl;
 cout<<"38	                            Sr	                      Strontium	                 1050  K                  "<<endl;
 cout<<"39	                            Y	                      Yttrium	                 1799  K                  "<<endl;
 cout<<"40	                            Zr	                      Zirconium	                 2128  K                  "<<endl;
 cout<<"41	                            Nb	                      Niobium	                 2750  K                  "<<endl;
 cout<<"42	                            Mo	                      Molybdenum	             2896  K                  "<<endl;
 cout<<"43	                            Tc	                      Technetium	             2430  K                  "<<endl;
 cout<<"44	                            Ru	                      Ruthenium	                 2607  K                  "<<endl;
 cout<<"45	                            Rh	                      Rhodium	                 2237  K                  "<<endl;
 cout<<"46	                            Pd	                      Palladium	              1828.05  K                  "<<endl;
 cout<<"47	                            Ag	                      Silver	              1234.93  K                  "<<endl;
 cout<<"48	                            Cd	                      Cadmium	               594.22  K                  "<<endl;
 cout<<"49	                            In	                      Indium	               429.75  K                  "<<endl;
 cout<<"50	                            Sn	                      Tin	                   505.08  K                  "<<endl;
 cout<<"51	                            Sb	                      Antimony	               903.78  K                  "<<endl;
 cout<<"52	                            Te	                      Tellurium	               722.66  K                  "<<endl;
 cout<<"53	                            I	                      Iodine	               386.85  K                  "<<endl;
 cout<<"54	                            Xe	                      Xenon	                   161.30  K                  "<<endl;
 cout<<"55	                            Cs	                      Cesium	               301.59  K                  "<<endl;
 cout<<"56	                            Ba	                      Barium	                  103  K                  "<<endl;
 cout<<"57	                            La	                      Lanthanum	                 1193  K                  "<<endl;
 cout<<"58	                            Ce	                      Cerium	                 1071  K                  "<<endl;
 cout<<"59	                            Pr	                      Praseodymium	             1204  K                  "<<endl;
 cout<<"60	                            Nd	                      Neodymium	                 1294  K                  "<<endl;
 cout<<"61	                            Pm	                      Promethium	             1373  K                  "<<endl;
 cout<<"62	                            Sm	                      Samarium	                 1345  K                  "<<endl;
 cout<<"63	                            Eu	                      Europium	                 1095  K                  "<<endl;
 cout<<"64	                            Gd	                      Gadolinium	             1586  K                  "<<endl;
 cout<<"65	                            Tb	                      Terbium	                 1629  K                  "<<endl;
 cout<<"66	                            Dy	                      Dysprosium	             1685  K                  "<<endl;
 cout<<"67	                            Ho	                      Holmium	                 1747  K                  "<<endl;
 cout<<"68	                            Er	                      Erbium	                 1770  K                  "<<endl;
 cout<<"69	                            Tm	                      Thulium	                 1818  K                  "<<endl;
 cout<<"70	                            Yb	                      Ytterbium	                 1092  K                  "<<endl;
 cout<<"71	                            Lu	                      Lutetium	                 1936  K                  "<<endl;
 cout<<"72	                            Hf	                      Hafnium	                 2506  K                  "<<endl;
 cout<<"73	                            Ta	                      Tantalum	                 3290  K                  "<<endl;
 cout<<"74	                            W	                      Tungsten	                 3695  K                  "<<endl;
 cout<<"75	                            Re	                      Rhenium	                 3459  K                  "<<endl;
 cout<<"76	                            Os	                      Osmium	                 3306  K                  "<<endl;
 cout<<"77	                            Ir	                      Iridium	                 2739  K                  "<<endl;
 cout<<"78	                            Pt	                      Platinum	               2041.4  K                  "<<endl;
 cout<<"79	                            Au	                      Gold	                  1337.33  K                  "<<endl;
 cout<<"80	                            Hg	                      Mercury	               234.32  K                  "<<endl;
 cout<<"81	                            Tl	                      Thallium	                  577  K                  "<<endl;
 cout<<"82	                            Pb	                      Lead	                   600.61  K                  "<<endl;
 cout<<"83	                            Bi	                      Bismuth	               544.40  K                  "<<endl;
 cout<<"84	                            Po	                      Polonium	                  527  K                  "<<endl;
 cout<<"85	                            At	                      Astatine	                  575  K                  "<<endl;
 cout<<"86	                            Rn	                      Radon	                      202  K                  "<<endl;
 cout<<"87	                            Fr	                      Francium	                     N/A                  "<<endl;
 cout<<"88	                            Ra	                      Radium	                  202  K                  "<<endl;
 cout<<"89	                            Ac	                      Actinium	                 1323  K                  "<<endl;
 cout<<"90	                            Th	                      Thorium	                 2023  K                  "<<endl;
 cout<<"91	                            Pa	                      Protactinium	             1845  K                  "<<endl;
 cout<<"92	                            U	                      Uranium	                 1408  K                  "<<endl;
 cout<<"93	                            Np	                      Neptunium	                  917  K                  "<<endl;
 cout<<"94	                            Pu	                      Plutonium	                  913  K                  "<<endl;
 cout<<"95	                            Am	                      Americium	                 1449  K                  "<<endl;
 cout<<"96	                            Cm	                      Curium	                 1618  K                  "<<endl;
 cout<<"97	                            Bk	                      Berkelium	                 1323  K                  "<<endl;
 cout<<"98	                            Cf	                      Californium	             1173  K                  "<<endl;
 cout<<"99	                            Es	                      Einsteinium	             1133  K                  "<<endl; 
 cout<<"100	                            Fm	                      Fermium	                185.4  K                  "<<endl;
 cout<<"101	                            Md	                      Mendelevium	            113.3  K                  "<<endl;
 cout<<"102	                            No	                      Nobelium	                113.3  K                  "<<endl;
 cout<<"103	                            Lr	                      Lawrencium	            195.7  K                  "<<endl;
 cout<<"104	                            Rf	                      Rutherfordium	                 N/A                  "<<endl;
 cout<<"105	                            Db	                      Dubnium	                     N/A                  "<<endl;
 cout<<"106	                            Sg	                      Seaborgium	                 N/A                  "<<endl;
 cout<<"107	                            Bh	                      Bohrium	                     N/A                  "<<endl;
 cout<<"108	                            Hs	                      Hassium	                     N/A                  "<<endl;
 cout<<"109	                            Mt	                      Meitnerium	                 N/A                  "<<endl;
 cout<<"110	                            Ds	                      Darmstadtium	                 N/A                  "<<endl;
 cout<<"111	                            Rg	                      Roentgenium	                 N/A                  "<<endl;
 cout<<"112	                            Cn	                      Copernicium	                 N/A                  "<<endl;
 cout<<"113	                            Nh	                      Nihonium	                     N/A                  "<<endl;
 cout<<"114	                            Fl	                      Flerovium	                     N/A                  "<<endl;
 cout<<"115	                            Mc	                      Moscovium	                     N/A                  "<<endl;
 cout<<"116	                            Lv	                      Livermorium	                 N/A                  "<<endl;
 cout<<"117	                            Ts	                      Tennessine	                 N/A                  "<<endl;
 cout<<"118	                            Og	                      Oganesson	                     N/A                  "<<endl;

}
else if(((i>=10)&&(i<=13))&& (j==34))
{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_GREEN   );
	gotoxy(9,39);
 cout<<"Element	        Symbol	        Latin Name  "<<endl;
    gotoxy(9,41);
 cout<<"Antimony	     Sb	             Stibium    "<<endl;
  gotoxy(9,42);
 cout<<"Copper	         Cu	             Cuprum     "<<endl;
  gotoxy(9,43);
 cout<<"Gold	         Au	             Aurum      "<<endl;
  gotoxy(9,44);
 cout<<"Iron	         Fe	             Ferrum     "<<endl;
  gotoxy(9,45);
 cout<<"Lead	         Pb	             Plumbum    "<<endl;
  gotoxy(9,46);
 cout<<"Mercury	         Hg	             Hydragyrum "<<endl;
  gotoxy(9,47);
 cout<<"Potassium	     K	             Kalium     "<<endl;
 gotoxy(9,48);
 cout<<"Silver	         Ag	             Argentum   "<<endl;
 gotoxy(9,49);
 cout<<"Sodium	         Na	             Natrium    "<<endl;
 gotoxy(9,50);
 cout<<"Tin	             Sn	             Stannum    "<<endl;
 gotoxy(9,51);
 cout<<"Tungsten	     W	             Wolfram    "<<endl;
}
else if(((i>=10)&&(i<=13)) &&(j==36))
{
		HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(h, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_BLUE   );
	gotoxy(9,39);
cout<<"Element Atomic Number        Element Symbol              Element Name                Element MOLECULAR MASS     "<<endl;
 cout<<"                                                                                     (UNITS IN u)                                                                    "<<endl;
 cout<<"1                             	H	                      Hydrogen	                   1.00797               "<<endl;
 cout<<"2                              	He	                      Helium	                   4.00260               "<<endl;
 cout<<"3	                            Li	                      Lithium	                   6.941                 "<<endl;
 cout<<"4	                            Be	                      Beryllium	                   9.01218               "<<endl;
 cout<<"5	                            B	                      Boron	                      10.81                  "<<endl;
 cout<<"6	                            C	                      Carbon	                  12.011                 "<<endl;
 cout<<"7                             	N	                      Nitrogen	                  14.0067                "<<endl;
 cout<<"8                            	O	                      Oxygen	                  15.9994                "<<endl;
 cout<<"9	                            F	                      Fluorine	                  18.9984                "<<endl;
 cout<<"10                            	Ne	                      Neon	                      20.176                 "<<endl;
 cout<<"11	                            Na	                      Sodium	                  22.98977               "<<endl;
 cout<<"12                            	Mg	                      Magnesium	                  24.305                 "<<endl;
 cout<<"13	                            Al	                      Aluminium	                  26.98154               "<<endl;
 cout<<"14                           	Si	                      Silicon	                  28.0855                "<<endl;
 cout<<"15	                            P	                      Phosphorus	              30.97376               "<<endl;
 cout<<"16	                            S	                      Sulfur	                  32.06                  "<<endl;
 cout<<"17                           	Cl	                      Chlorine	                  35.453                 "<<endl;
 cout<<"18	                            Ar	                      Argon	                      39.0983                "<<endl;
 cout<<"19	                            K	                      Potassium	                  39.948                 "<<endl;
 cout<<"20                            	Ca                     	  Calcium                     40.08                  "<<endl;
 cout<<"21	                            Sc	                      Scandium	                  44.9559                "<<endl;
 cout<<"22  	                        Ti	                      Titanium	                  47.90                  "<<endl;
 cout<<"23	                            V	                      Vanadium	                  50.94415               "<<endl;
 cout<<"24	                            Cr	                      Chromium	                  51.996                 "<<endl;
 cout<<"25	                            Mn	                      Manganese	                  54.9380                "<<endl;
 cout<<"26	                            Fe	                      Iron	                      55.847                 "<<endl;
 cout<<"27	                            Co	                      Cobalt	                  58.70                  "<<endl;
 cout<<"28	                            Ni	                      Nickel	                  58.9332                "<<endl;
 cout<<"29	                            Cu	                      Copper	                  63.546                 "<<endl;
 cout<<"30	                            Zn	                      Zinc	                      65.38                  "<<endl;
 cout<<"31	                            Ga	                      Gallium	                  69.72                  "<<endl;
 cout<<"32	                            Ge	                      Germanium	                  72.59                  "<<endl;
 cout<<"33	                            As	                      Arsenic	                  74.9216                "<<endl;
 cout<<"34	                            Se	                      Selenium	                  78.96                  "<<endl;
 cout<<"35	                            Br	                      Bromine	                  79.904                 "<<endl;
 cout<<"36	                            Kr	                      Krypton	                  83.80                  "<<endl;
 cout<<"37	                            Rb	                      Rubidium	                  85.4678                "<<endl;
 cout<<"38	                            Sr	                      Strontium	                  87.62                  "<<endl;
 cout<<"39	                            Y	                      Yttrium	                  88.9059                "<<endl;
 cout<<"40	                            Zr	                      Zirconium	                  91.22                  "<<endl;
 cout<<"41	                            Nb	                      Niobium	                  92.9064                "<<endl;
 cout<<"42	                            Mo	                      Molybdenum	              95.94                  "<<endl;
 cout<<"43	                            Tc	                      Technetium	              98                     "<<endl;
 cout<<"44	                            Ru	                      Ruthenium	                 101.07                  "<<endl;
 cout<<"45	                            Rh	                      Rhodium	                 102.9055                "<<endl;
 cout<<"46	                            Pd	                      Palladium	                 106.4                   "<<endl;
 cout<<"47	                            Ag	                      Silver	                 107.868                 "<<endl;
 cout<<"48	                            Cd	                      Cadmium	                 112.41                  "<<endl;
 cout<<"49	                            In	                      Indium	                 114.82                  "<<endl;
 cout<<"50	                            Sn	                      Tin	                     118.69                  "<<endl;
 cout<<"51	                            Sb	                      Antimony	                 121.75                  "<<endl;
 cout<<"52	                            Te	                      Tellurium	                 126.9045                "<<endl;
 cout<<"53	                            I	                      Iodine	                 127.60                  "<<endl;
 cout<<"54	                            Xe	                      Xenon	                     131.30                  "<<endl;
 cout<<"55	                            Cs	                      Cesium	                 132.9054                "<<endl;
 cout<<"56	                            Ba	                      Barium	                 137.33                  "<<endl;
 cout<<"57	                            La	                      Lanthanum	                 138.905                 "<<endl;
 cout<<"58	                            Ce	                      Cerium	                 140.12                  "<<endl;
 cout<<"59	                            Pr	                      Praseodymium	             140.9077                "<<endl;
 cout<<"60	                            Nd	                      Neodymium	                 144.24                  "<<endl;
 cout<<"61	                            Pm	                      Promethium	             145                     "<<endl;
 cout<<"62	                            Sm	                      Samarium	                 150.4                   "<<endl;
 cout<<"63	                            Eu	                      Europium	                 151.25                  "<<endl;
 cout<<"64	                            Gd	                      Gadolinium	             157.25                  "<<endl;
 cout<<"65	                            Tb	                      Terbium	                 158.3254                "<<endl;
 cout<<"66	                            Dy	                      Dysprosium	             162.50                  "<<endl;
 cout<<"67	                            Ho	                      Holmium	                 164.9304                "<<endl;
 cout<<"68	                            Er	                      Erbium	                 167.26                  "<<endl;
 cout<<"69	                            Tm	                      Thulium	                 168.932                 "<<endl;
 cout<<"70	                            Yb	                      Ytterbium	                 173.0                   "<<endl; 
 cout<<"71	                            Lu	                      Lutetium	                 174.6                   "<<endl;
 cout<<"72	                            Hf	                      Hafnium	                 178.49                  "<<endl;
 cout<<"73	                            Ta	                      Tantalum	                 180.9479                "<<endl;
 cout<<"74	                            W	                      Tungsten	                 183.85                  "<<endl;
 cout<<"75	                            Re	                      Rhenium	                 186.207                 "<<endl;
 cout<<"76	                            Os	                      Osmium	                 190.2                   "<<endl;
 cout<<"77	                            Ir	                      Iridium	                 192.22                  "<<endl;
 cout<<"78	                            Pt	                      Platinum	                 195.09                  "<<endl;
 cout<<"79	                            Au	                      Gold	                     196.9665                "<<endl;
 cout<<"80	                            Hg	                      Mercury	                 200.59                  "<<endl;
 cout<<"81	                            Tl	                      Thallium	                 204.37                  "<<endl;
 cout<<"82	                            Pb	                      Lead	                     207.2                   "<<endl;
 cout<<"83	                            Bi	                      Bismuth	                 208.98                  "<<endl;
 cout<<"84	                            Po	                      Polonium	                 209                     "<<endl;
 cout<<"85	                            At	                      Astatine	                 210                     "<<endl;
 cout<<"86	                            Rn	                      Radon	                     222                     "<<endl;
 cout<<"87	                            Fr	                      Francium	                 223                     "<<endl;
 cout<<"88	                            Ra	                      Radium	                 226.02                  "<<endl;
 cout<<"89	                            Ac	                      Actinium	                 227.027                 "<<endl;
 cout<<"90	                            Th	                      Thorium	                   N/A                   "<<endl;
 cout<<"91	                            Pa	                      Protactinium	             231.039                 "<<endl;
 cout<<"92	                            U	                      Uranium	                   N/A                   "<<endl;
 cout<<"93	                            Np	                      Neptunium	                 237.482                 "<<endl;
 cout<<"94	                            Pu	                      Plutonium	                 242                     "<<endl;
 cout<<"95	                            Am	                      Americium	                 243                     "<<endl;
 cout<<"96	                            Cm	                      Curium	                 247                     "<<endl;
 cout<<"97	                            Bk	                      Berkelium	                 247                     "<<endl;
 cout<<"98	                            Cf	                      Californium	             251                     "<<endl;
 cout<<"99	                            Es	                      Einsteinium	             252                     "<<endl;
 cout<<"100	                            Fm	                      Fermium	                 257                     "<<endl;
 cout<<"101	                            Md	                      Mendelevium	             258                     "<<endl;
 cout<<"102	                            No	                      Nobelium	                 250                     "<<endl;
 cout<<"103	                            Lr	                      Lawrencium	             260                     "<<endl; 
 cout<<"104	                            Rf	                      Rutherfordium	             261                     "<<endl;
 cout<<"105	                            Db	                      Dubnium	                 262                     "<<endl;
 cout<<"106	                            Sg	                      Seaborgium	             263                     "<<endl;
 cout<<"107	                            Bh	                      Bohrium	                 262                     "<<endl;
 cout<<"108	                            Hs	                      Hassium	                 255                     "<<endl;
 cout<<"109	                            Mt	                      Meitnerium	             256                     "<<endl;
 cout<<"110	                            Ds	                      Darmstadtium	             281                     "<<endl;
 cout<<"111	                            Rg	                      Roentgenium                272                     "<<endl;
 cout<<"112	                            Cn	                      Coperniciu	             N/A                     "<<endl;
 cout<<"113	                            Nh	                      Nihonium                   N/A                     "<<endl;
 cout<<"114	                            Fl	                      Flerovium	                 N/A                     "<<endl;
 cout<<"115	                            Mc	                      Moscovium	                 N/A                     "<<endl;
 cout<<"116	                            Lv	                      Livermorium	             N/A                     "<<endl;
 cout<<"117	                            Ts	                      Tennessine	             N/A                     "<<endl;
 cout<<"118	                            Og	                      Oganesson	                 N/A                     "<<endl;
}
else if(((i>=52) && (i<=57)) && (j==30))
{
gotoxy(9,44);
cout<<"";
gotoxy(14,39);
cout<<"GROUP 1";
gotoxy(19,39);
cout<<"";
gotoxy(24,39);
cout<<"GROUP 2";
gotoxy(29,39);
cout<<"";
gotoxy(34,39);
cout<<"GROUP 3-11";
gotoxy(41,39);
cout<<"";
gotoxy(47,39);
cout<<"GROUP 12";
gotoxy(53,39);
cout<<"";
gotoxy(58,39);
cout<<"GROUP 13";
gotoxy(64,39);
cout<<""; 
gotoxy(70,39);
cout<<"GROUP 14";
gotoxy(76,39);
cout<<"";
gotoxy(82,39);
cout<<"GROUP 15";
gotoxy(88,39);
cout<<"";
gotoxy(94,39);
cout<<"GROUP 16";
gotoxy(100,39);
cout<<"";
gotoxy(106,39);
cout<<"GROUP 17";
gotoxy(112,39);
cout<<"";
gotoxy(118,39);
cout<<"GROUP 18";
gotoxy(14,41);
cout<<"";
gotoxy(14,42);
cout<<"ALKALI";
gotoxy(14,43);
cout<<"METALS";
gotoxy(24,41);
cout<<"";
gotoxy(24,42);
cout<<"ALKALINE";
gotoxy(24,43);
cout<<"EARTH";
gotoxy(24,44);
cout<<"METALS";
gotoxy(34,41);
cout<<"";
gotoxy(34,42);
cout<<"TRANSITION";
gotoxy(34,43);
cout<<"METALS";
gotoxy(44,41);
cout<<"";
gotoxy(47,42);
cout<<"POST";
gotoxy(47,43);
cout<<"TRASITION";
gotoxy(47,44);
cout<<"METALS";
gotoxy(58,41);
cout<<"";
gotoxy(58,42);
cout<<"BORON";
gotoxy(58,43);
cout<<"GROUP";
gotoxy(58,44);
cout<<" OR ";
gotoxy(58,445);
cout<<"LCOSAGENS";
gotoxy(58,46);
cout<<" OR ";
gotoxy(58,47);
cout<<"TRIELS";
gotoxy(70,41);
cout<<"";
gotoxy(70,42);
cout<<"CARBON";
gotoxy(70,43);
cout<<"GROUP";
gotoxy(70,44);
cout<<" OR ";
gotoxy(70,45);
cout<<"TETRAGENS";
gotoxy(70,46);
cout<<" OR ";
gotoxy(70,47);
cout<<"TETRELS";
gotoxy(82,41);
cout<<"";
gotoxy(82,42);
cout<<"NITROGEN";
gotoxy(82,43);
cout<<"GROUP";
gotoxy(82,44);
cout<<" OR ";
gotoxy(82,45);
cout<<"PNICTOGENS";
gotoxy(94,41);
cout<<"";
gotoxy(94,42);
cout<<"OXYGEN";
gotoxy(94,43);
cout<<"GROUP";
gotoxy(94,44);
cout<<" OR ";
gotoxy(94,45);
cout<<"CHALCOGENS";
gotoxy(106,41);
cout<<"";
gotoxy(106,42);
cout<<"HALOGENS";
gotoxy(118,41);
cout<<"";
gotoxy(118,42);
cout<<"NOBLE";
gotoxy(118,43);
cout<<"GAS";
}
else if(((i>=52) && (i<=57))&&(j==32))
{
	gotoxy(9,39);
	cout<<"S-BLOCK ELEMENTS";
	gotoxy(11,41);
	cout<<"* Consisting of the first two groups i.e. GROUP 1 & GROUP 2.";
	gotoxy(11,43);
	cout<<"* S-block elements have quite similar physical and chemical properties.";
	gotoxy(11,45);
	cout<<"* The valence electrons of the elements in this block occupy s-orbitals.";
    gotoxy(9,48);
    delay(5);
    cout<<"P-BLOCK ELEMENTS";
    gotoxy(11,50);
    cout<<"* Consisting of last six groups of the periodic table (Groups 13 to 18).";
    gotoxy(11,52);
    cout<<"* P-block elements have their valence electrons occupying p-orbitals.";
    gotoxy(11,54);
    cout<<"* This block consists of non-metals, semi-metals and poor metals.";
    gotoxy(9,57);
    delay(5);
    cout<<"D-BLOCK ELEMENTS";
    gotoxy(11,59);
    cout<<"* D-Block elements consist of element groups 3 to 12.";
    gotoxy(11,61);
    cout<<"* It correspond to the filling of the d-orbital subshell of the second outermost shell.";
    gotoxy(11,63);
    cout<<"* D-block elements and F-block elements show considerable similarities across the periods too.";
    gotoxy(9,66);
    delay(5);
    cout<<"F-BLOCK ELEMENTS";
    gotoxy(11,68);
    cout<<"* They can be divided into Lanthanides (also known as rare earth elements) and Actinides that are highly reactive to halogens and chalcogens like lanthanides but they react more easily.";
    gotoxy(11,70);
    cout<<"* They are also known as inner transition elements.";
    gotoxy(11,72);
    cout<<"* F-block elements have their valence electrons in f-orbitals.";
}
else if(((i>=52) && (i<=57)) && (j==34))
{
	gotoxy(9,39);
	cout<<"Mnemonic for Group 1:";
	gotoxy(12,41);
	cout<<"LiNa Ki Ruby Cse Friendship hai.";
	delay(5);
	gotoxy(9,44);
	cout<<"Mnemonic for Group 2:";
	gotoxy(12,46);
	cout<<"Beta Mange Car Scooter Baap rone se Raazi";
	delay(5);
	gotoxy(9,49);
	cout<<"Mnemonic for Group 13:";
	gotoxy(12,51);
	cout<<"B A G I T.";
	delay(5);
	gotoxy(9,54);
	cout<<"Mnemonic for Group 14:";
	gotoxy(12,56);
	cout<<"Chemistry Sir Gives Sanki Problems.";
	delay(5);
	gotoxy(9,59);
	cout<<"Mnemonic for Group 15:";
	gotoxy(12,61);
	cout<<"Nahi Pasand Aise Sab Bhai.";
	gotoxy(9,64);
	delay(5);
	cout<<"Mnemonic for Group 16:";
	gotoxy(12,66);
	cout<<"Oh! Style Se Tel Polish.";
	gotoxy(9,69);
	delay(5);
	cout<<"Mnemonic for Group 17:";
	gotoxy(12,71);
	cout<<"Fir Call kar Bahaar AayI Aunty.";
	gotoxy(9,74);
	delay(5);
	cout<<"Mnemonic for Group 18:";
	gotoxy(12,76);
	cout<<"He Never Arrived; Kara Xero Run pe out.";
	gotoxy(9,79);
	delay(5);
	cout<<"Mnemonic for D-block elements is easier to remember through PERIODS";
	gotoxy(11,81);
	cout<<"Period 4 elements are quite stable and many of them are very common in earth crust or core or both.";
	gotoxy(11,83);
	delay(5);
	cout<<" D-block elements it includes are Scandium (Sc), Titanium (Ti), Vanadium (V), Chromium (Cr), Manganese (Mn), Iron (Fe), Cobalt (Co), Nickel (Ni), Copper (Cu) and Zinc (Zn).";
	gotoxy(12,85);
	cout<<"Mnemonic for Period 4:";
	gotoxy(13,87);
	cout<<"Science Ti(ea)cher Vineeta Criplani Man Fenko (FeCo) Ni Kyun(Cu) Zaan hai?";
	gotoxy(13,89);
	cout<<"Read as: Science Teacher Vineeta Kriplani manfenko ni kyun zaan hai ?";
	gotoxy(11,92);
	delay(5);
	cout<<"Period 5 elements are known to fill their 5s shell first, then 4d shells and then 5p shells, with rhodium being the exception.";
	gotoxy(11,94);
	cout<<"D-block elements it includes are Yttrium (Y), Zirconium (Zr), Niobium (Nb), Molybdenum (Mo), Technetium (Tc), Ruthenium (Ru), Rhodium (Rh), Pd (Palladium), Silver (Ag) and Cadmium (Cd).";
	gotoxy(12,96);
	delay(5);
	cout<<"Mnemonic for Period 5:";
	gotoxy(13,98);
	cout<<"Yeh Zarra Nabi bana Mohabaat mein T(c)eri, R(u)o R(h)o P(d)ukarogi Aaj(g) ise Chandni";
	gotoxy(13,100);
	cout<<"Read as: Yeh Zarra Nabi bana Mohabbat mein Teri, Ro Ro Pukarogi Aaj ise Chandni";
	gotoxy(11,103);
	delay(5);
	cout<<"Period 6 includes the lanthanides or rare earths. Some of these transition metals are very valuable such as gold.";
	gotoxy(11,105);
	cout<<"D-block elements it includes are Lutetium (Lu), Hafnium (Hf), Tantalum (Ta), Tungsten (W), Rhenium (Re), Osmium (Os), Iridium (Ir), Platinum (Pt), Gold (Au) and Mercury (Hg).";
	gotoxy(12,107);
	delay(5);
	cout<<"Mnemonic for Period 6:";
	gotoxy(13,109);
	cout<<"Yeh Zarra Nabi bana Mohabaat mein T(c)eri, R(u)o R(h)o P(d)ukarogi Aaj(g) ise Chandni";
	gotoxy(13,111);
	cout<<"Red as: La Hafta Warna Reh Us Irritating Popat ke saath Aur Hoja pagal.";
	gotoxy(11,114);
	delay(5);
	cout<<"Period 7 contains the radioactive elements only. It includes actinides which include the heaviest naturally occurring element Californium.";
	gotoxy(11,116);
	cout<<"D-block elements it includes are Actinium (Ac), Rutherfordium (Rf), Dubnium (Db), Seaborgium (Sg), Bohrium (Bh), Hassium (Hs), Meitnerium (Mt), and Darmstadtium (Ds).";
	gotoxy(12,118);
	delay(5);
	cout<<"Mnemonic for Period 7:";
	gotoxy(13,120);
	cout<<"Ak(c)ele R(f) D(b) S(g)harma ki B(h)ook mein H(s)ain Maths ke Difficult sawaal.";
	gotoxy(13,122);
	cout<<"Read as: Akele R D Sharma ki Book mein Hain Maths ke Difficult sawaal.";
	gotoxy(9,125);
	delay(5);
	cout<<"Lanthanides are divided in three parts for easier remembering of the names of the elements";
	gotoxy(11,127);
	cout<<"We can learn all these in three parts:";                                                                                                 
	gotoxy(12,129);
	delay(5);
	cout<<"PART-1 : Cerium (Ce), Praseodymium (Pr), Neodymium (Nd), Promethium (Pm), and Samarium (Sm)";
	gotoxy(13,131);
	cout<<"Mnemonic for Lanthanides Part 1:";
	gotoxy(14,133);
	cout<<"Celina aur Priety Ne dande se Pammy aur Simmy ko mara.";
	gotoxy(12,135);
	delay(5);
	cout<<"PART-2 : Europium (Eu), Gadolinium (Gd), Terbium (Tb), Dysprosium (Dy), and Holmium (Ho)";
	gotoxy(13,137);
	cout<<"Mnemonic for Lanthanides Part 2:";
	gotoxy(14,139);
	cout<<"Europe G(d)aya to TB(b) aur Di(y)arrohoea Ho gaya.";
	gotoxy(12,141);
	delay(5);
	cout<<"PART-3 : Erbium (Er), Thulium (Tm), Ytterbium (Yb) and Lutetium (Lu)";
	gotoxy(13,143);
	cout<<"Mnemonic for Lanthanides Part 3:";
	gotoxy(14,145);
	cout<<"E re, dekh Tamatar Yellow aur bLue hain.";
	gotoxy(9,148);
	delay(5);
	cout<<"Actinides are divided in three parts for easier remembering of the names of the elements";
	gotoxy(11,150);
	cout<<"We can learn all these in three parts :";
	gotoxy(12,152);
	delay(5);
	cout<<"PART-1 : Thorium (Th), Protactinium (Pa), Uranium (U), and Neptunium (Np)";
	gotoxy(13,154);
	cout<<"Mnemonic for Actinides Part 1:";
	gotoxy(14,156);
	cout<<"Thode Pehelwan Unse Niptengey.";
	gotoxy(12,158);
	delay(5);
	cout<<"PART-2 : Plutonium (Pu), Americium (Am), Curium (Cm), Berkelium (Bk)";
	gotoxy(13,160);
	cout<<"Mnemonic for Actinides Part 2:";
	gotoxy(14,162);
	cout<<"Purane Aam K(C)am Bikenge.";
	gotoxy(12,164);
	delay(5);
	cout<<"PART-3 : Fermium (Fm), Mendelevium (Md), Nobelium (No), and Lawrencium (Lr)";
	gotoxy(13,166);
	cout<<"Mnemonic for Actinides Part 3:";
	gotoxy(14,168);
	cout<<"Itni Family aMdani mein No Ladki rajee.";
}
else if(((i>=50)&&(i<=55))&&(j==36))
{
system("Color 00");
gotoxy(9,39);
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;
cout<<"                                                                                                                                                         "<<endl;

}
char key;  //The details of the elements are stored as a key in the memory and is stored untill it is called from the cursor.
key=getch(); //esc is used to exit the program after excecution 
if(key==27)
 exit(0);
else display();   //The function is called again so that the elements is shown.
}