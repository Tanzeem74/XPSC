#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int i=1,cnt=0;
        while(i<n){
            if(s[i]!=s[i-1]) cnt++;
            i++;
        }
        cnt++;
        cout << cnt/2 << endl;
    }

}
