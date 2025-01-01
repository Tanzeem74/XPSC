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
		int mid;
		int res=-1;
		while(start<=end){
			mid=(start+end)/2;
			if(k>=v[mid]){
				start=mid+1;
				res=mid;
			}
			else{
				end=mid-1;
			}
			mid=(start+end)/2;
		}
		cout << res+1 << endl;
	}
}