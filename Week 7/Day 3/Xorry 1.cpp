#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int x; cin >> x;
	    int n=x;
	    int cnt=0;
	    while(x>1){
	        x/=2;
	        cnt++;
	    }
	    int a=(1<<cnt);
	    int b=n-a;
	    cout << b << " " << a << endl;
	}
}
