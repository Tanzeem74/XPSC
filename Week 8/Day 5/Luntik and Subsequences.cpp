#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    ll one=0,zero=0;
    for(auto &i : v){
        cin >> i;
        if(i==1){
            one++;
        }
        else if(i==0){
            zero++;
        }
    }
    //cout << zero << " " << one << endl;
    ll res=(1ll<<zero)*one;
    cout << res << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
