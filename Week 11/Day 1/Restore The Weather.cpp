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
        ll n,k; cin >> n >> k;
        vector<ll>vec(n);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[v[i].second]=vec[i];
        }
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}