#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll>v(n);
        for(auto & i : v){
            cin >> i;
        }
        map<ll,ll>mp;
        for(auto i : v){
            if(i<=n){
                mp[i]++;
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++){
            ll x=0;
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    x+=mp[j];
                    if(j*j!=i){
                        x+=mp[i/j];
                    }
                }
            }
            ans=max(ans,x);
        }
        cout << ans << endl;
    }
}