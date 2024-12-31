#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    map<ll,ll>mp;
    mp[0]=1;
    ll l=0,r=0;
    ll sum=0,cnt=0;
    while(r<n){
        ll x; cin >> x;
        sum=(sum+x)%n;
        if(sum<0){
            sum+=n;
        }
        cnt+=mp[sum];
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