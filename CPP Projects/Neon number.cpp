//A neon number is a number where the sum of digits of square of the number is equal to the number.
//Eg:9-->square=81-->8+1=9 
#include <iostream>
using namespace std;
void neon(int number)
{
    int sq = number * number;
    int sum = 0;
    int lastDigit;
    while (sq > 0)
    {
        lastDigit = sq % 10;//extracting the last digit
        sum = sum + lastDigit;
        sq= sq/ 10;
    }
     if (sum == number)
       cout << "The given number " << number << " is a Neon number";
    else
        cout << "The given number " << number << " is not a Neon number";

}
int main()
      {
          int number;
          cout << "Enter a number to check if it is a neon number: ";
          cin >> number;
          neon(number);
    
}