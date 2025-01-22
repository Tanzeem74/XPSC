#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;
        if(a>(n/2)+1 || b<(n/2)){
            cout << -1 << endl;
            continue;
        }
        if((a==(n/2)+1 && b!=(n/2)) || (b==(n/2) && a!=(n/2)+1)){
            cout<< -1 <<endl;
            continue;
        }
        cout << a << " ";
        for(int i=(n/2)+1;i<=n;i++){
            if(i!=b && i!=a){
                cout << i << " ";
            }
        }
        cout << b << " ";
        for(int i=1;i<=(n/2);i++){
            if(i!=a && i!=b){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}