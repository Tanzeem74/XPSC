#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
#define inf 1e18
const ll maxN=2e6+5;
using namespace std;
int main(){

   faster 
   int t=1; cin >> t;
   while(t--){
      int k,n,m; cin >> k >> n >> m;
      vector<int>v(n),v2(m);
      for(int i=0;i<n;i++){
         cin >> v[i];
      }
      for(int i=0;i<m;i++){
         cin >> v2[i];
      }
      reverse(v.begin(),v.end());
      reverse(v2.begin(),v2.end());
      vector<int> ans;
      while(v2.size() || v.size()){
         if(v.empty()){
            if(k>=v2.back()){
               k+=(v2.back()==0);
               ans.push_back(v2.back());
               v2.pop_back();
            }
            else{
               break;
            }
         }
         else if(v2.empty()){
            if(k>=v.back()){
               k+=(v.back()==0);
               ans.push_back(v.back());
               v.pop_back();
            }
            else{
               break;
            }
         }
         else{
            if(k>=v.back()){
               k+=(v.back()==0);
               ans.push_back(v.back());
               v.pop_back();
            }
            else if(k>=v2.back()){
               k+=(v2.back()==0);
               ans.push_back(v2.back());
               v2.pop_back();
            }
            else{
               break;
            }
         }
         if(ans.size()!=(n+m)){
               cout << "-1" << endl;
               continue;
         }
         for(int i=0; i<n+m; i++){
            cout << ans[i] << " \n"[i==(n+m-1)];
         }
      }
   }
}