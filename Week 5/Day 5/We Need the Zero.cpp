#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    int exor=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        exor^=v[i];
    }
    //cout << exor << endl;
    if(n%2==1)
        cout << exor << endl;
    else if(exor==0)
        cout << 0 << endl;
    else
        cout << -1 << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}
