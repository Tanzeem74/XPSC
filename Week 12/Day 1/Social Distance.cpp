#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        ll n,m; cin >> n >> m;
        vector<ll>a(n+1);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.begin()+n);
        a[n]=a[0];
        ll x=n;
        for(int i=0;i<n;i++){
            x+=(max(a[i],a[i+1]));
        }
        if(x<=m){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}