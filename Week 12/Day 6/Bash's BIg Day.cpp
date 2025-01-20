#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    faster
    ll n; cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        for(int j=2;j<=sqrt(v[i]);j++){
            bool ok=true;
            while(v[i]%j==0){
                if(ok){
                    mp[j]++;
                    ok=false;
                }
                v[i]/=j;
            }
        }
        if(v[i]>1){
            mp[v[i]]++;
        }
    }
    ll mx=1;
    for(auto [x,y]:mp){
        mx=max(y,mx);
    }
    cout << mx << endl;
}