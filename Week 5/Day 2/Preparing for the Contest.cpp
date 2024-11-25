#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k;
    for(int i=1;i<=k;i++)
        cout << i << " ";
    for(int i=n;i>k;i--)
        cout << i << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
