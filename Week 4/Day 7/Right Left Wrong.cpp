#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    string s; cin >> s;
    vector<ll>pSum(n+1);
    for(int i=1;i<=n;i++)
        pSum[i]=pSum[i-1]+v[i-1];
    ll i=0,j=n-1;
    ll ans=0;
    while(i<j){
        while(i<j && s[i]=='R')
            i++;
        while(i<j && s[j]=='L')
            j--;
        if(i<j)
            ans+=pSum[j+1]-pSum[i];
        i++;
        j--;
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
