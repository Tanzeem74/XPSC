#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int> b){
    return a.first.second<b.first.second;
}
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<pair<int,int>,int>>v(n);
        for(int i=0;i<n;i++){
            int l,r; cin >> l >> r;
            v[i].first.first=l;
            v[i].first.second=r;
            v[i].second=i;
        }
        sort(v.begin(),v.end(),cmp);
        o_set<int>s;
        ll ans=0;
        for(int i=0;i<n;i++){
            int l=v[i].first.first;
            int r=v[i].first.second;
            int x=v[i].second;
            int ok=s.size()-s.order_of_key(l);
            s.insert(l);
            ans+=ok;
        }
        cout << ans << endl;
    }
}