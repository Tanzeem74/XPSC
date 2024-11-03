#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,x; cin >> n >> x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        if(a!=x) v.push_back(a);
    }
    for(auto value : v) cout << value << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}