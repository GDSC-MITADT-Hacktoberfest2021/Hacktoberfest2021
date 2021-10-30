#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calcDigitSum(int n){

   int digitSum = 0;
   int digitVal;
   while (n > 0) {
      digitVal = n % 10;//extracting the last digit
      digitSum += digitVal;
      n /= 10;
   }
   return digitSum;
   
}
int checkDudeney(int N) {
   
   int cubeRoot = int( round( cbrt(N) ) );
   
   if(pow(cubeRoot, 3.0) != N){
      return 0;
   }

   int sumDigit = calcDigitSum(N);
   
   if (cubeRoot != sumDigit)
      return 0;

   return 1;
}

int main() {
    int N;
   cout << "Enter a positive number: ";
   cin >> N;
   cout<<"The number "<<N;
   if (checkDudeney(N))
      cout<<" is a dudeney number.";
   else
      cout<<" is not a dudeney number.";
   return 0;
}