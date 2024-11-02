#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<string,int>mp;
    for(int i=1;i<=n;i++){
        string s; cin >> s;
        mp[s]++;
        if(mp[s]==1) cout << "OK" << endl;
        else cout << s << mp[s]-1 << endl;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
