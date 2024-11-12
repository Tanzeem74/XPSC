#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,m,h; cin >> n >> m >> h;
    vector<ll>v(n),v1(m);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) cin >> v1[i];
    sort(v.begin(),v.end(),greater<ll>());
    sort(v1.begin(),v1.end(),greater<ll>());
    ll result=0;
    for(int i=0;i<min(n,m);i++){
        result+=min(v[i],v1[i]*h);
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
