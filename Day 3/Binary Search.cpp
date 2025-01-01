#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q; cin >> n >> q;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	while(q--){
		int k ; cin >> k;
		int start=0,end=n-1;
		int mid=(start+end)/2;
		while(start<=end && v[mid]!=k){
			if(k>v[mid]){
				start=mid+1;
			}
			else{
				end=mid-1;
			}
			mid=(start+end)/2;
		}
		if(start > end) cout << "NO" << endl;
		else cout <<  "YES" << endl; 		
	}
}