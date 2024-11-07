#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,q; cin >> n >> q;
    map<int,set<int>>mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x].insert(i+1);
    }
    while(q--){
        int x,y; cin >> x >> y;
        if(mp.find(x)==mp.end() || mp.find(y)==mp.end()){
            cout << "no" << endl;
        }
        else{
            auto start=*mp[x].begin();
            auto last=*mp[y].rbegin();
            if(start<last) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}