#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n,l,r; cin >> n >> l >> r;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll res=0;
        for(int i=0;i<n;i++){
            int h=lower_bound(v.begin()+1+i,v.end(),l-v[i])-v.begin();
            int lo=upper_bound(v.begin()+1+i,v.end(),r-v[i])-v.begin();
            res+=lo-h;
        }
        cout << res << endl;
    }
}