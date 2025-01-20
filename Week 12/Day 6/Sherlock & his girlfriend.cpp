#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    faster
    ll n; cin >> n;
    vector<bool> prime(1e5+5,true);
    for (ll i=2;i<=n+1;i++) {
        if (prime[i]){
            for (ll j=i*i;j<=n+1;j+=i) {
                prime[j]=false;
            }
        }
    }
    if(n+1<4){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    for(int i=2;i<=n+1;i++){
        if(prime[i]){
            cout << 1 << " ";
        }
        else{
            cout << 2 << " ";
        }
    }
    cout << endl;
}