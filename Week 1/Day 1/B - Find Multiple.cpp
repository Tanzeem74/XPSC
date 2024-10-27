#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;

void solution(){
   ll x,y,z; cin >> x >> y >> z;
   int i=1;
   ll ans=-1;
   while(z<=y){
        z*=i;
        if(z>=x && z<=y){
            ans=z;
            break;
        }
        i++;
   }
   cout << ans << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
