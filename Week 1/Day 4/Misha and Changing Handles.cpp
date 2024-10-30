#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<string,string> ans, has;
    for (int i=1;i<=n;i++){
        string x,y; cin >> x >> y;
        if (has.find(x)!=has.end()) {
            string s=has[x];
            ans[s]=y;
            has.erase(x);
            has[y]=s;
        }
        else {
            ans[x]=y;
            has[y]=x;
        }
    }
    cout << ans.size() << endl;
    for (auto [x,y] : ans) {
        cout << x << " " << y << endl;
    }
}


int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}