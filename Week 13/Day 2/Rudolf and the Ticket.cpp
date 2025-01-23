#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        vector<int>v(n),v1(m);
        for(auto &i : v){
            cin >> i;
        }
        for(auto &i :v1){
            cin >> i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i]+v1[j]<=k){
                    ans++;
                }
            }
        }
        cout << ans << endl;

    }
}