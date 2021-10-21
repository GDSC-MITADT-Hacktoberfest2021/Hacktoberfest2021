#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(void){
    ll n,k,i;
    cin>>n>>k;
    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    deque<ll> q;
    for(i=0;i<k;i++){
        while((!q.empty())&&v[i]>=v[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(;i<n;i++){
        cout<<v[q.front()]<<" ";
        while((!q.empty())&&q.front()<=i-k){
            q.pop_front();
        }
        while((!q.empty())&&v[i]>=v[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    cout<<v[q.front()];
}

