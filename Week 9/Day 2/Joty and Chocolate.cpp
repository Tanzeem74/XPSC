#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
ll lcm(ll x, ll y){
    return((x/__gcd(x,y))*y);
}
void solution(){
    ll n,a,b,p,q; cin >> n >> a >> b >> p >> q;
    ll ad=n/a;
    ll bd=n/b;
    ll lc=lcm(a,b);
    ll both=n/lc;
    //cout << both << endl;
    if(p>q){
        ll x=ad*p;
        ll y=(bd-both)*q;
        cout << x+y << endl;
    }
    else{
        ll x=(ad-both)*p;
        ll y=bd*q;
        cout << x+y << endl;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
