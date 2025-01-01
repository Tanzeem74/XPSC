#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
	faster
	int n,q; cin >> n >> q;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	while(q--){
		int k ; cin >> k;
		int start=0,end=n-1;
		int mid;
		int res=n;
		while(start<=end){
			mid=start+(end-start)/2;
			if(k<=v[mid]){
				res=mid;
				end=mid-1;
			}
			else{
				start=mid+1;
			}
		}
		cout << res+1 << endl;
	}
}