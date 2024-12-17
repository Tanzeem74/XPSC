#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int>v(n),ans;
	    for(int i=0;i<n;i++){
	        cin >> v[i];
	    }
	    multiset<int>ml;
	    for(int i=1;i<n-1;i++){
	        int x=abs(v[i]-v[i+1]);
	        int y=abs(v[i]-v[i-1]);
	        ml.insert(max(x,y));
	        
	    }
	    ml.insert(abs(v[1]-v[0]));
	    ml.insert(abs(v[n-1]-v[n-2]));
	    //sort(ans.begin(),ans.end());
	    cout << *ml.begin() << endl;
	    //cout << ans[0] << endl;
	    
	}

}
