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
        auto sum=[&](ll mid) {
            ll p=k-1;
            ll q=k+n-1;
            ll l=(mid*(mid+1))/2-(p*(p+1))/2;
            ll r=(q*(q+1))/2-(mid*(mid+1))/2;
            return abs(l-r);
        };
        ll l=k,r=k+n-1;
        ll ans=0;
        while(l<=r){
            ll m1=l+(r-l)/3;
            ll m2=r-(r-l)/3;
            if(sum(m1)<sum(m2)){
                ans = m1;
                r = m2-1;
            }
            else{
                ans=m2;
                l=m1+1;
            }
        }
        cout << sum(ans) << endl;
    }
}