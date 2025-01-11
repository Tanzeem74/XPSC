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
        vector<ll>v(k+1);
        for(int i=1;i<=k;i++){
            cin >> v[i];
        }
        sort(v.begin()+1,v.begin()+k+1);
        auto ok=[&](ll mid){
            ll x=0;
            for(int i=mid;i<=k;i++){
                if(x>=v[i]){
                    return false;
                }
                x+=(n-v[i]);
            }
            return true;
        };
        ll l=1,r=k,mid,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            if(ok(mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout << k-ans+1 << endl;
    }
}