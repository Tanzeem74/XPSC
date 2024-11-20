#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,s; cin >> n >> s;
    vector<ll>v(n);
    for (int i =0;i<n;i++) cin >> v[i];
    int i=0,j=0;
    ll ans=0;
    multiset<ll> ml;
    while (j<n){
        ml.insert(v[j]);
        ll mn=*ml.begin(),mx=*ml.rbegin();
        if (mx-mn<=s)
            ans+=(j-i+1);
        else{
            while (i<=j){
                mn=*ml.begin(),mx=*ml.rbegin();
                if (mx-mn<=s){
                    break;
                }
                ml.erase(ml.find(v[i]));
                i++;
            }
            mn=*ml.begin(), mx=*ml.rbegin();
            if (mx-mn<=s) ans += (j-i+1);
        }
        j++;
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}