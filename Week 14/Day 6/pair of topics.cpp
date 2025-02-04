#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            int x; cin >> x;
            v[i]=v[i]-x;
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            if(v[i]>0){
                ans=ans+(n-1-i);
            }
            else{
                auto it=upper_bound(v.begin()+i,v.end(),abs(v[i]));
                ans= ans+(v.end()-it);
            }
        }
        cout << ans << endl;
    }
}