#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string s,t; cin >> s >> t;
        int a=0,b=0,cnt=0;
        while(a<n && b<m){
            if(s[a]==t[b]){
                cnt++;
                a++;
                b++;
            }
            else{
                b++;
            }
        }
        cout << cnt << endl;
    }
}