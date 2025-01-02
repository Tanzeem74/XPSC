#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(auto &i : v){
            cin >> i;
        }
        sort(v.begin(),v.end());
        int q; cin >> q;
        while(q--){
            int l,r; cin >> l >> r;
            auto itL=lower_bound(v.begin(),v.end(),l);
            auto itR=upper_bound(v.begin(),v.end(),r);
            cout << itR-itL << " ";
        }
        cout << endl;
    }
}