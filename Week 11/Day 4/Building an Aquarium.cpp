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
        ll n,k; cin >> n >> k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        auto ok=[&](ll mid){
            ll x=0;
            for(auto i : v){
                if(i<=mid){
                    x+=(mid-i);
                }
                if(x>k){
                    break;
                }
            }
            return x<=k ;
        };
        ll l=0,r=1e15,mid,ans;
        while(l<=r){
            mid=(l+r)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout << ans << endl;
    }
}