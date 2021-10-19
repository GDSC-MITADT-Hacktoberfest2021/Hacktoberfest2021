#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define lb long double
#define all(x) x.begin(),x.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(i,n) for(i=0;i<n;i++)
#define foi(i,a,n) for(i=a;i<n;i++)
#define fod(i,a,n) for(i=n-1;i>=a;i--)
#define     minv(v)     *min_element(v.begin(),v.end())
#define     maxv(v)     *max_element(v.begin(),v.end())
#define mpp map<ll,ll> 
#define pll pair<ll, ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vs vector<string>
#define mod (ll)(1e9+7)
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
//  order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
int tt=1;

/* Template taken from tourist*/
string to_string(string s){return '"'+s+'"';}
string to_string(const char* s){return to_string((string)s);}
string to_string(bool b){return(b?"true":"false");}
template<typename A,typename B>
string to_string(pair<A,B>p){return"("+to_string(p.first)+", "+to_string(p.second)+")";}
template<typename A>
string to_string(A v){bool z=true;string r="{";for(const auto &x:v){if(!z){r+=", ";}z=false;r+=to_string(x);}r+="}";return r;}
void debug_out(){cerr << endl;}
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T){cerr << " " << to_string(H);debug_out(T...);}
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif

void solve()
{
    ll n,sum=0,max_sum=-1*mod,i;
    cin>>n;
    ll a[n];
    fo(i,n)
    {
        cin>>a[i];
    }
    fo(i,n)
    {
        sum+=a[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<max_sum;
   
}
int main()
{
    cout<<setprecision(15);
    fast
    //cin>>tt;
    while(tt--)
    {
       solve();
    }
}