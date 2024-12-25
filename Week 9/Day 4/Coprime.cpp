#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin >> v[i];
        mp[v[i]]=i;
    }
    int mx=-1;
    for(auto [x,y] : mp){
        for(auto [a,b] : mp){
            if(__gcd(x,a)==1){
                mx=max(y+b,mx);
            }
        }
    }
    cout << mx << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
