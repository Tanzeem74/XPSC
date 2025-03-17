#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

   faster 
   int t=1; cin >> t;
   while(t--){
      ll n; cin >> n;
      map<pair<ll,ll>,ll>mp;
      vector<ll>cnt(2);
      for(int i=0;i<n;i++){
         int x,y; cin >> x >> y;
         mp[{x,y}]++;
         cnt[y]++;
      }
      ll ans=0;
      for(auto it:mp){
         ll x=it.first.first;
         ll y=it.first.second;
         if(mp.count({x,1-y})){
            ans+=(cnt[y]-1);
         }
         if(mp.count({x-1,1-y}) && mp.count({x+1,1-y})){
            ans++;
         }
      }
      cout << ans << endl;
   }
}