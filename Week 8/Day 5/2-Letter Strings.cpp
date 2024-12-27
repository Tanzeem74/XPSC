#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<string>s(n);
    map<char,ll>f,l;
    map<string,ll>str;
    for(ll i=0;i<n;i++){
        cin >> s[i];
        str[s[i]]++;
        f[s[i][0]]++;
        l[s[i][1]]++;
    }
    ll res=0;
    for(ll i=0;i<n;i++){
        str[s[i]]--;
        f[s[i][0]]--;
        l[s[i][1]]--;
        res+=(f[s[i][0]]+l[s[i][1]]);
        res=res-2*str[s[i]];
    }
    cout << res << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
