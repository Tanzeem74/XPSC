#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int>psum(n);
        psum[0]=v[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+v[i];
        }
        while(q--){
            int k ; cin >> k;
            auto it=lower_bound(psum.begin(),psum.end(),k);
            if(it==psum.end()){
                cout << -1 << endl;
            }
            else{
                int res=it-psum.begin();
                cout << res+1 << endl;
            }
        }        
    }
}