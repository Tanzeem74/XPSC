#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<pair<string,string>>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    cout << sz << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}