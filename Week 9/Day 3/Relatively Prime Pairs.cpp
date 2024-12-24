#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll l,r; cin >> l >> r;
    cout << "YES" << endl;
    while(l<r){
        cout << l << " " << l+1 << endl;
        l+=2;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
