#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n/2 << endl;
        if(n&1){
            cout << 3 << " ";
            while(n>3){
                cout << 2 << " ";
                n-=2;
            }
            cout << endl;
        }
        else{
            while(n>0){
                cout << 2 << " ";
                n-=2;
            }
            cout << endl;
        }
    }
}