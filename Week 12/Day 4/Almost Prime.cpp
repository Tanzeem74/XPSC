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
bool isAlmostPrime(int n){
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        cnt++;
    }
    return (cnt==2);
}
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=isAlmostPrime(i);
        }
        cout << ans << endl;
    }
}