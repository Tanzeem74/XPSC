#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int>s;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            s.insert(x);
        }
        vector<int>v;
        for(auto i : s){
            v.push_back(i);
        }
        int mx=0;
        for(int i=0;i<v.size();i++){
            int it=upper_bound(v.begin(),v.end(),v[i]+n-1)-v.begin();
            mx=max(mx,it-i);
        }
        cout << mx << endl;
    }
}