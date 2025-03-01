#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong() {
    int n,k; cin >> n >> k;
    map<int, vector<int>> mp;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        if(mp[x].size()<k){
            mp[x].push_back(i);
        }
    }
    int c=0;
    for (auto &i:mp) {
        c+=i.second.size();
    }
    c-=(c%k);
    vector<int>ans(n,0);
    int color=0;
    for (auto &x:mp){
        for (auto &i:x.second){
            if (c>0){
                color++;
                ans[i]=color;
                color%=k;
                c--;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){

    faster;
    int t; cin >> t;
    while (t--){
        wrong ();
    }
    return 0;
}
