#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
ll n;
vector<ll>v;
ll appleDiv(ll i, ll s, ll s1){
    if(i==n){
        return abs(s-s1);
    }
    return min(appleDiv(i+1,s+v[i],s1),appleDiv(i+1,s,s1+v[i]));
}
void solution(){
    cin >> n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    ll mn=appleDiv(0,0,0);
    cout << mn << endl;
}
int main(){
    faster
    int t = 1; // cin >> t;
    while (t--){
        solution();
    }
    return 0;
}