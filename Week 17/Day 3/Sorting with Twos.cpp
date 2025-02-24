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
        bool ok=true;
        int j=0;
        for(int i=1;i<n;i++){
            if(i==pow(2,j)){
                j++;
                continue;
            }
            if(v[i]>v[i+1]){
                cout << "NO" << endl;
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
    }
}