#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int l,r; cin >> l >> r;
            mp[l]++;
            mp[r+1]--;
        }
        ll sum=0;
        bool ok=true;
        for(auto [x,y]:mp){
            sum+=y;
            if(sum>=3){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}