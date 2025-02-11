#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll x; cin >> x;
            mp[x-i]++;
        }
        ll ans=0;
        for(auto [x,y]:mp){
            y=((y-1)*y)>>1;
            ans+=y;
        }
        cout << ans << endl;

    }
}