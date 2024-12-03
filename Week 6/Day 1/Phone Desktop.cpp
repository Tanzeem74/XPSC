#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int x,y; cin >> x >> y;
    if(x==0 && y==0){
        cout << 0 << endl;
        return;
    }
    cout << max((y+1)/2,(x+4*y+14)/15) << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}