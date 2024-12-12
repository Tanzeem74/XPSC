#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    map<ll,ll>mp;
    ll res=0;
    for(auto &i : v){
        cin >> i;
        ll k=__lg(i);
        res+=mp[k]++;
    }
    cout << res << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
