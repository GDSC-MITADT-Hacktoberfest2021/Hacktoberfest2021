#include <iostream>
#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;
//A palindrome number/string is a number/string that is same after reversing it
void numpalin()
{
      int num,number,digit, rev = 0;;
       cout << "Enter a positive number: ";
       cin >> num;
       number = num;

     do
     {
         digit = num % 10;//extracting the last digit
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (number == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    }
     
void stringpalin() 
     {  
     string str,temp;
     cout<<"Enter a String ";
     cin>>str;
     temp=str;
     reverse(str.begin(), str.end());//reversing the String
     cout << " The reverse of the String is: " << str << endl;
     if(str==temp)
         cout<<"The string is a palindrome.";
     else
         cout<<"The string is not a palindrome.";
         
     }
    
int main()
      {
          int option;
       cout<<"Press 1 to check if the given number is a palindrome or Press 2 to  check if the given String is a palindrome ";
       cin>>option;
       if(option==1)
       numpalin();
       else if(option==2)
       stringpalin();
    
}