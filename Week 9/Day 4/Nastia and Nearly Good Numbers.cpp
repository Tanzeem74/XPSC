#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll a,b; cin >> a >> b;
    if(b>1){
        cout << "YES" << endl;
        ll x=a;
        ll y=x*b;
        ll z=x+y;
        cout << x << " " << y << " " << z << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
