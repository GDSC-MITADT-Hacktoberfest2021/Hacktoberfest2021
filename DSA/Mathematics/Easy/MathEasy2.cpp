#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,k;cin>>n>>k;
    if(n%2==0){
        cout<<(n/2)*k<<endl;
    }else{
        n/=2;
        n++;
        cout<<n*k<<endl;
    }
    return 0;
}
