#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    map<ll,ll>mp;
    mp[0]=1;
    ll sum=0,cnt=0;
    int l=0,r=0;
    while(r<n){
        sum+=v[r];
        cnt+=mp[sum-k];
        mp[sum]++;
        r++;
    }
    cout << cnt << endl;
}
int main(){
    faster
    int t = 1; //cin >> t;
    while (t--){
        solution();
    }
    return 0;
}