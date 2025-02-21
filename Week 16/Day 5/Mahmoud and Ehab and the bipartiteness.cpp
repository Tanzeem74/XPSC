#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool vis[100002];
ll cnt[10];
vector<ll>tr[100002];
void dfs(ll src,ll x){
    vis[src]=true;
    ll a=x%2;
    cnt[a]++;
    for(auto child : tr[src]){
        if(!vis[child]){
            dfs(child,x+1);
        }
    }
}
int main(){

    faster 
    int t=1; //cin >> t;
    while(t--){
        ll n; cin >> n;
        for(int i=0;i<n;i++){
            ll u,v; cin >> u >> v;
            tr[u].push_back(v);
            tr[v].push_back(u);
        }
        dfs(1,1);
        cout << (cnt[0]*cnt[1])-(n-1) << endl;
    }
}