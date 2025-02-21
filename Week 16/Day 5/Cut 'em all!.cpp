#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int n;
vector<int>tr[100002];
bool vis[100002],leaf[100002];
int par[100002],cnt=-1;
int dfs(int src){
    vis[src]=true;
    int ans=1;
    for(auto child : tr[src]){
        if(!vis[child]){
            leaf[src]=true;
            par[src]+=dfs(child);
        }
    }
    if(par[src]&1){
        ans=0;
        cnt++;
    }
    return ans;
}
int main(){

    faster 
    int t=1; //cin >> t;
    while(t--){
        cin  >> n;
        for(int i=0;i<n-1;i++){
            int u,v; cin >> u >> v;
            tr[u].push_back(v);
            tr[v].push_back(u);
        }
        dfs(1);
        if(n&1){
        cout << -1 << endl;
        }
        else{
            cout << cnt << endl;
        }
    }
}