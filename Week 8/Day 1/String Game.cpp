#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    string s; cin >> s;
	    int cnt=0;
	    queue<char>q;
	    for(auto i : s){
	        if(!q.empty() && q.front()!=i){
	            q.pop();
	            cnt++;
	        }
	        else{
	            q.push(i);
	        }
	    }
	    if(cnt&1){
	        cout << "zlatan" << endl;
	    }
	    else{
	        cout << "ramos" << endl;
	    }
	}
}
