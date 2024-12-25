#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll mx=v.back();
    ll g=0;
    ll mn_ppl=0;
    for(ll i=0;i<n;i++){
        ll diff=mx-v[i];
        g=__gcd(g,diff);
    }
    for(ll i=0;i<n;i++){
        ll diff=mx-v[i];
        mn_ppl+=diff/g;
    }
    cout << mn_ppl << " " << g << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
