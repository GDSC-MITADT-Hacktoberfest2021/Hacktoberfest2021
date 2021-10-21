#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n, bool isPrime[]){

	// initializing 0 and 1 as non-prime 
	isPrime[0]= false;
	isPrime[1]= false;

	for(int i=2; i*i<=n; i++){
		if(isPrime[i]){
			for(int j=i*i; j<=n; j+=i){
				isPrime[j]=false;
			}
		}
	}

}

int main(){

	int n;
	cin>>n;

	bool isPrime[n+1];
	memset(isPrime, true, sizeof(isPrime));
	// In the array isPrime[n+1], the value of isPrime[i] is true if i is prime, else false 
	SieveOfEratosthenes(n, isPrime); 

	for(int i=0; i<n; i++){
		if(isPrime[i] && isPrime[n-i]){
			cout<<i<<" "<<(n-i)<<endl;
			break;
		}
	}

	return 0;

}

