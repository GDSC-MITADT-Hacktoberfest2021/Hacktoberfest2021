#include <iostream>
#include <cmath>
 
// A number is a twisted prime number if the reverse of the number is also a prime number
  
int reverseNum(int n) {//reverse the number
    int reverse = 0, rem;
  
    while (n!= 0) 
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    return reverse;
}
  
int isPrime(int n) {//checks if the number is a prime number
    if (n < 2 || (n % 2 == 0 && n != 2)) {
        return 0;
    }
  
    int count = floor(sqrt(n));
    for (int i = 3; i <= count; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
  
int main(void) {
    int n;
    std::cout<<"Enter a number to check if it is a twisted prime ";
    std::cin>>n;
    int reverse_n = reverseNum(n);
  
    if (isPrime(n) && isPrime(reverse_n)) {
        std::cout <<"Yes,"<<n<< " is a twisted prime number";
    } else {
        std::cout <<"No,"<<n<< " is not a twisted prime number";
    }
  
    return 0;
}