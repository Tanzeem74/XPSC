#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int p1,p2,p3; cin >> p1 >> p2 >> p3;
        int sum=p1+p2+p3;
        if((sum&1)){
            cout << -1 << endl;
        }
        else{
            int mn=min(sum/2,p1+p2);
            cout << mn << endl;
        }
    }
}