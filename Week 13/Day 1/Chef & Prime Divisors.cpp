#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        ll x,y; cin >> x >> y;
        while(__gcd(x,y)>1){
            y=y/__gcd(x,y);
        }
        if(y>=2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}