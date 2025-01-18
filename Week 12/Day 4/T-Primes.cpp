#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll x=sqrt(n);
        ll y=x*x;
        if(y==n){
            if(isPrime(x)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}