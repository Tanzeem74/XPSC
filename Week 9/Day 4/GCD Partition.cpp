#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    ll sum=0;
    for(auto &i : v){
        cin >> i;
        sum+=i;
    }
    ll s=0;
    ll res=INT_MIN;
    for(int i=0;i<n-1;i++){
        s+=v[i];
        res=max(res,__gcd(s,sum-s));
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
