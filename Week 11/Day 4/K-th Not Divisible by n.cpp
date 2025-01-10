#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int n,k;
bool ok(int mid){
    return (mid-(mid/n))>=k;
}
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        cin >> n >> k;
        int l=1,r=2e9,mid,ans;
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