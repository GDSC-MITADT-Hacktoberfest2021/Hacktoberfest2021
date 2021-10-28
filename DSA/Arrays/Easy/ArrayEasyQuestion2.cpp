#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;//stores the number of triplet having sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cnt++;
                }
            }
        }
    }
    if(cnt==0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
}
