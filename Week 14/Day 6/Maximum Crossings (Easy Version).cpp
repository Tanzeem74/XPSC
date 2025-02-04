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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]>=v[j]){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}