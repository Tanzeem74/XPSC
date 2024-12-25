#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int lcm(int x, int y){
    return((x/__gcd(x,y))*y);
}
void solution(){
    int l,r; cin >> l >> r;
    if(2*l>r){
        cout << "-1 -1" << endl; 
        return;
    }
    cout << l << " " << 2*l << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
