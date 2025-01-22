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
        vector<int>v(n);
        for(auto &i : v){
            cin >> i;
        }
        if(n==1){
            cout << 0 << endl;
        }
        else{
            int ans=v[n-1]-v[0];
            int mx=INT_MIN,mn=INT_MAX;
            for(auto i : v){
                mx=max(i,mx);
                mn=min(i,mn);
            }
            ans=max(ans,v[n-1]-mn);
            ans=max(ans,mx-v[0]);
            for(int i=1;i<n;i++){
                ans=max(ans,v[i-1]-v[i]);
            }
            cout << ans << endl;
        }
    }
}