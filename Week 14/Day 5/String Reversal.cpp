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
        string s; cin >> s;
        string r=s;
        reverse(r.begin(),r.end());
        map<char,vector<int>>p_s,p_r;
        for(int i=0;i<n;i++){
            p_s[s[i]].push_back(i);
            p_r[r[i]].push_back(i);
        }
        vector<int>per(n);
        for(char c='a';c<='z';c++){
            for(int i=0;i<p_s[c].size();i++){
                per[p_r[c][i]]=p_s[c][i];
            }
        }
        pbds<int>pb;
        ll ans=0;
        for(int i=n-1;i>=0;i--){
            ans+=pb.order_of_key(per[i]);
            pb.insert(per[i]);
        }
        cout << ans << endl;
    }
}