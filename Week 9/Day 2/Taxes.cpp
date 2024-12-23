#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solution(){
    ll n; cin >> n;
    if(isPrime(n)){
        cout << 1 << endl;
    }
    else if((n&1)==0 || isPrime(n-2)){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
