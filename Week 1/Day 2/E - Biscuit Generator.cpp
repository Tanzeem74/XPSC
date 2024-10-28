#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;

void solution(){
   ll x,y,z; cin >> x >> y >> z;
   if(x>z){
        cout << 0 << endl;
        return;
   }
   cout << (z/x)*y << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
