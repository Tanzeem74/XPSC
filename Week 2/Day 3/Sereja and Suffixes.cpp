#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    set<int>s;
    vector<int>v(n),cnt(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        cnt[i]=s.size();
    }
    for(int i=0;i<m;i++){
        int pos; cin >> pos;
        cout << cnt[pos-1] << endl;
    }
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}