#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
vector<int>tr[4001];
string s;
int dp[4001][2];
int ans;
void dfs(int src,int par){
    bool ff=(s[src]=='B');
    dp[src][ff]++;
    for(auto child : tr[src]){
        if(child==par){
            continue;
        }
        dfs(child,src);
        dp[src][0]+=dp[child][0];
        dp[src][1]+=dp[child][1];
    }
    ans+=(dp[src][1]==dp[src][0]);
}
void clearr(int n){
    ans=0;
    for(int i=0;i<=n;i++){
        tr[i].clear();
        dp[i][0]=dp[i][1]=0;
    }
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=2;i<=n;i++){
            int m; cin >> m;
            tr[m].push_back(i);
            tr[i].push_back(m);
        }
        cin >> s;
        s='['+s;
        dfs(1,1);
        cout << ans << endl;
        clearr(n);
    }
}