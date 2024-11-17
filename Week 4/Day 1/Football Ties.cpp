#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        int mx=max(x,y);
        cout << mx%3 << endl;
    }

}
