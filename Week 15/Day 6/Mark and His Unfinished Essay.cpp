#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,c,q; cin >> n >> c >> q;
        string s; cin >> s;
        vector<ll>l(c+1),r(c+1),d(c+1);
        l[0]=0;
        r[0]=n;
        for(int i=1;i<=c;i++){
            ll x,y; cin >> x >> y;
            x--;
            y--;
            l[i]=r[i-1];
            r[i]=l[i]+(y-x+1);
            d[i]=l[i]-x;
        }
        while(q--){
            ll k; cin >> k;
            k--;
            for(int i=c;i>=1;i--){
                if(k<l[i]){
                    continue;
                }
                else{
                    k-=d[i];
                }
            }
            cout << s[k] << endl;
        }
    }
}