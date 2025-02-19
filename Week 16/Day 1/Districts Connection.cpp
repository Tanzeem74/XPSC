#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        bool ok=false;
        for(int i=2;i<=n;i++){
            if(v[1]!=v[i]){
                ok=true;
                break;
            }
        }
        if(!ok){
            cout << "NO" << endl;
        }
        else{
            int dis=-1;
            cout << "YES" << endl;
            for(int i=2;i<=n;i++){
                if(v[1]!=v[i]){
                    cout << 1 << " " << i << endl;
                    dis=i;
                }
            }
            for(int i=2;i<=n;i++){
                if(v[i]==v[1]){
                    cout << dis << " " << i << endl;
                }
            }
        }
    }
}