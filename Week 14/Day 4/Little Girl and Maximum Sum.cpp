#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        vector<ll>diff(n+1);
        for(int i=0;i<q;i++){
            ll l,r; cin >> l >> r;
            l--;
            r--;
            diff[l]++;
            diff[r+1]--;
        }
        for(int i=1;i<=n;i++){
            diff[i]=diff[i-1]+diff[i];
        }
        sort(diff.begin(),diff.end(),greater<int>());
        sort(v.begin(),v.end(),greater<int>());
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=(v[i]*diff[i]);
        }
        cout << ans << endl;
    }
}