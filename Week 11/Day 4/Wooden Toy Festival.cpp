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
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        auto ok=[&](int time){
            int cnt=1,l=0;
            for(int r=0;r<n;r++){
                if((v[r]-v[l])>2*time){
                    l=r;
                    cnt++;
                }
            }
            return cnt<=3;
        };
        sort(v.begin(),v.end());
        int l=0,r=1e9,mid,ans;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout << ans << endl;
    }
}