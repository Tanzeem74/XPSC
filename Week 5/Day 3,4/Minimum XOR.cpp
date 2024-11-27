#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int>v(n);
	    int exor=0;
	    for(int i=0;i<n;i++){
	        cin >> v[i];
	        exor^=v[i];
	    }
	    int mn=exor;
	    for(int i=0;i<n;i++){
	        mn=min(mn,exor^v[i]);
	    }
	    cout << mn << endl;
	}

}
