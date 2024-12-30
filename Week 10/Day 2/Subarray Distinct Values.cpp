#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    map<ll,ll>mp;
    int unq=0,r=0,l=1;
    ll res=0;
    while(l<=n){
        while(r<n && (mp[v[r+1]]>=1 || unq<k)){
            r++;
            mp[v[r]]++;
            if(mp[v[r]]==1){
                unq++;
            }
        }
        res+=(r-l+1);
        mp[v[l]]--;
        if(!mp[v[l]]){
            unq--;
        }       
        l++;
    }
    cout << res << endl;
}
int main(){
    faster
    int t = 1; //cin >> t;
    while (t--){
        solution();
    }
    return 0;
}