#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int op1=v[n-2]-v[1];
    int op2=v[n-3]-v[0];
    int op3=v[n-1]-v[2];
    //cout << op1 << " " << op2 << " " << op3 << endl;
    cout << min(op1,min(op2,op3)) << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
