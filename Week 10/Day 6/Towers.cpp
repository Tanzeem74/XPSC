#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(auto &i : v){
            cin >> i;
        }
        multiset<int>ml;
        for(auto x : v){
            auto it=ml.upper_bound(x);
            if(it!=ml.end()){
                ml.erase(it);
            }
            ml.insert(x);
        }
        int sz=ml.size();
        cout << sz << endl;
    }
}