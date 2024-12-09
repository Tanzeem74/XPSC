#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    ll mxBit=__lg(n);
    vector<ll>ans;
    for(ll i=0;i<=mxBit;i++){
        if((n >> i) & 1){
            ll val=n-(1ll << i);
            if(val>0)
                ans.push_back(val);
        }
    }
    sort(ans.begin(),ans.end());
    ans.push_back(n);
    cout << ans.size() << endl;
    for(auto v : ans)
        cout << v << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
