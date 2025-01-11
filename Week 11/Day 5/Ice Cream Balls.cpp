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
        ll n; cin >> n;
        ll l=1,r=1e10,mid,ball;
        ll ans=1;
        while(l<=r){
            mid=(l+r)/2;
            ball=(mid*(mid-1)/2);
            if(ball<n){
                ans=mid;
                l=mid+1;
            }
            else if(ball>n){
                r=mid-1;
            }
            else{
                ans=mid;
                break;
            }

        }
        ball=(ans*(ans-1))/2;
        ans=ans+(n-ball);
        cout << ans << endl;
    }
}