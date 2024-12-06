#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    if(n>=m && n%2==m%2){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}