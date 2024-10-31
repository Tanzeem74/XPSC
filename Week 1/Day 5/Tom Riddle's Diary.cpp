#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;
void solution(){
    map<string,int> mp;
    int n; cin>>n;
    while(n--){
        string name;cin>>name;
        mp[name]++;
        //for(auto[x,y] : mp)
        //   cout << x << "->" << y << endl;
        if(mp[name]==1)
            cout<<"NO" << endl;
        else
            cout<<"YES" << endl;
    }
    
}

int main() {
    faster
    int t=1; //cin >> t;
    while (t--) {
        solution();
    }
}
