#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string Given_nm="Timur";
    string nm; cin >> nm;
    if(nm.size()!=Given_nm.size()){
        cout << "NO" << endl;
        return;
    }
    sort(Given_nm.begin(),Given_nm.end());
    sort(nm.begin(),nm.end());
    if(Given_nm==nm) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}