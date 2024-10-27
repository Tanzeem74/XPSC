#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;

void solution(){
    ll x,y; cin >> x >> y;
    if(x==y) cout << x+y << endl;
    else cout << 2*max(x,y)-1 << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
