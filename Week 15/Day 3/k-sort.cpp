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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(n==1){
            cout << 0 << endl;
        }
        else{
            map<ll,ll>mp;
            for(int i=1;i<n;i++){
                if(v[i]>=v[i-1]){
                    continue;
                }
                int d=v[i-1]-v[i];
                mp[d]++;
                v[i]=v[i-1];
            }
            ll sz=0;
            for(auto [x,y]:mp){
                sz+=y;
            }
            ll l=0;
            ll ans=0;
            for(auto [x,y]:mp){
                ll curr=x-l;
                ans+=curr*(sz+1);
                sz-=y;
                l=x;
            }
            cout << ans << endl;
        }
    }
}