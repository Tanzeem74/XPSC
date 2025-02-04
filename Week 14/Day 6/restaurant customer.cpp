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
        ll n; cin >> n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            ll x,y; cin >> x >> y;
            a[i]=x,b[i]=y;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll mx=0,l=0,r=0,m=0;
        while(l<n){
            if(a[l]<b[r]){
                m++;
                l++;
            }
            else{
                m--;
                r++;
            }
            mx=max(mx,m);
        }
        cout << mx << endl;
    }
}