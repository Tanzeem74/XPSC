#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<string>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<string,int>mp;
    for(int i=n-1;i>=0;i--){
        //string s; cin >> s;
        if(mp[v[i]]!=1) cout << v[i] << endl;
        mp[v[i]]=1;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}