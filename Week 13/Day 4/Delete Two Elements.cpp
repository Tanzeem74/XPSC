#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        sum*=2;
        ll res=0;
        if(sum%n==0){
            sum/=n;
            map<ll,ll>mp;
            for(int i=0;i<n;i++){
                res+=mp[sum-v[i]];
                mp[v[i]]++;
            }
        }
        cout << res << endl;
    }
}