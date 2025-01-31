#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        int l=0;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            if(x>l){
                cout << i+1 << endl;
                return 0;
            }
            x++;
            l=max(l,x);
        }
        cout << -1 << endl;
    }
}