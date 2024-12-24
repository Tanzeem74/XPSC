#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
const int mod = 1e9+7;
void solution(){
    int n; cin >> n;
    int res=1;
    for(int i=1;i<=n;i++){
        res=(1ll*res%mod * i%mod)%mod;
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
