#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n,op; cin >> n >> op;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        auto ok=[&](ll median){
            ll cnt=0;
            for(int i=(n/2);i<n;i++){
                if(v[i]<median){
                    cnt+=(median-v[i]);
                }
            }
            return cnt<=op;
        };
        sort(v.begin(),v.end());
        ll l=1,r=2e9;
        ll res,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                res=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout << res << endl;
    }
}