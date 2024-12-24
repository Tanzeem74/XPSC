#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
const int mod = 1e9+7;
int power(int x,int n){
    int ans=1%mod;
    while(n){
        if(n&1){
            ans=(1ll*ans%mod*x%mod)%mod;
        }
        x=1ll*x*x%mod;
        n=n>>1;
    }
    return ans;
}
void solution(){
    int a,b; cin >> a >> b;
    cout << power(a,b) << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
