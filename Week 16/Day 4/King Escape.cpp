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
        int ax,ay,bx,by,cx,cy; cin >> ax >> ay >> bx >> by >> cx >> cy;
        bool x=(bx<ax && cx<ax) || (bx>ax && cx>ax);
        bool y=(by<ay && cy<ay) || (by>ay && cy>ay);
        if(x && y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}