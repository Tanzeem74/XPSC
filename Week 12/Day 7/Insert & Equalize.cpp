#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin>>t;
    while (t--){
        ll n; cin >> n;
        vector<ll> v(n);
        map<ll,bool> mp;
        for (int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]=true;
        }
        sort(v.begin(),v.end());
        if(n==1){
            cout << 1 << endl;
        }
        else{
            ll x=0;
 
            for(int i=0;i<n-1;i++){
                x=__gcd(x,abs(v[i+1]-v[i]));
            }
            ll last=v[n-1],ans=0;
            while(mp[last]){
                last-=x;
                ans++;
            }
            for(int i=0;i<n;i++){
                ans+=((v[n-1]-v[i])/x);
            }
            cout << ans << endl;
        } 
    }
}