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
        int n,x; cin >> n >> x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        auto ok=[&](ll sec){
            ll cnt=0;
            for(int i=0;i<n;i++){
                cnt+=(sec/v[i]);
                if(cnt>=x){
                    return true;
                }
            }
            return cnt>=x;
        };
        ll l=1,r=1e18;
        ll res,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout << res << endl;
    }
}