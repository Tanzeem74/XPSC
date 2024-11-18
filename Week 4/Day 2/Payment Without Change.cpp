#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll a,b,n,s; cin >> a >> b >> n >> s;
    ll total=a*n+b*1;
    ll rem=s%n;
    if(rem<=b && total>=s) cout << "yes" << endl;
    else cout << "no" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
