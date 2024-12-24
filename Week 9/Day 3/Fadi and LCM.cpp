#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
ll lcm(ll x, ll y){
    return((x/__gcd(x,y))*y);
}
void solution(){
    ll n; cin >> n;
    ll x,y;
    for(int i=sqrt(n);i>0;i--){
        if(n%i==0){
            x=i;
            y=n/i;
            if(lcm(x,y)==n){
                break;
            }
        }
    }
    cout << x << " " << y << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
