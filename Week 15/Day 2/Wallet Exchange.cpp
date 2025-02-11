#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        if((x+y)&1){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}