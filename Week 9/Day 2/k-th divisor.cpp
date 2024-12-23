#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    vector<ll>res;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            res.push_back(i);
            if(n/i!=i){
                res.push_back(n/i);
            }
        }
    }
    sort(res.begin(),res.end());
    if(res.size()<k){
        cout << -1 << endl;
        return;
    }
    cout << res[k-1] << endl;
    /*for(auto i : res){
        cout << i << endl;
    }*/
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
