#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n ; cin >> n;
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    if(sum%2==0){
        cout << sum << endl;
        return;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]%2==sum%2){
            cout << sum-v[i] << endl;
            return;
        }
    }
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}