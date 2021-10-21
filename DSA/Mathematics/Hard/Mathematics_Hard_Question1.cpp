#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];

	int max_area=0;
	int left = 0, right = n-1;

	while(left < right){
		int current_area = (right-left)*(min(a[left], a[right]));
		max_area = max(max_area, current_area);

		if(a[left]<a[right]) left++;
		else right--;
	}

	cout<<max_area<<endl;
}

// Time complexity: O(n)
