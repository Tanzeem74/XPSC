#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<string,vector<int>> mp;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            string s; cin >> s;
            mp[s].push_back(i);
        }
    }
    vector<int> ans(4);
    for(auto[x,y] : mp){
        vector<int>v=y;
        if(v.size()==1) ans[v[0]]+=3;
        if(v.size()==2){
            ans[v[0]]+=1;
            ans[v[1]]+=1;
        }
    }
    for(int i=1;i<=3;i++) cout << ans[i] << " ";
    cout << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
