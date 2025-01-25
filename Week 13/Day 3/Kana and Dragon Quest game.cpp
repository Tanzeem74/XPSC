#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int h,n,m; cin >> h >> n >> m;
        while(h>20 && n){
            h/=2;
            h+=10;
            n--;
        }
        while(m){
            h-=10;
            m--;
        }
        if(h>m){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}