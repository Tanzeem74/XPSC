#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t; cin >> t;
    while(t--){
        string a,b,c; cin >> a >> b;
        int sz=a.size();
        sort(a.begin(),a.end());
        int n=b.size()-sz;
        bool ok=false;
        for(int i=0;i<=n;i++){
            c=b.substr(i,sz);
            sort(c.begin(),c.end());
            if(c==a){
                ok=true;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}