#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;

    //taking the input n
    cout<<"n = ";
    cin>>n;

    //building the formula
    k=8*(n*n) + 1;

    //printing
    cout<<n<<" th term is "<<k;
    
    return 0;
}