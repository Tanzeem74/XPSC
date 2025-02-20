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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool ok=true;
        int cnt=0;
        int i=1;
        while(i<n){
            for(int j=0;j<n;j=j+2*i){
                if(abs(v[j]-v[j+i])!=i){
                    ok=false;
                }
                if(v[j]>v[j+i]){
                    swap(v[j],v[j+i]);
                    cnt++;
                }
            }
            i*=2;
        }
        if(ok){
            cout << cnt << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}