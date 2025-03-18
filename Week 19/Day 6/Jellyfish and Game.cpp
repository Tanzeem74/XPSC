#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
#define inf 1e18
using namespace std;
int main(){

   faster 
   int t=1; cin >> t;
   while(t--){
      ll n,m,k; cin >> n >> m >> k;
      ll ar[100],br[100];
      ll mx_a=0,mn_a=inf,mx_b=0,mn_b=inf;
      ll s1=0,s2=0;
      for(int i=0;i<n;i++){
         cin >> ar[i];
         mx_a=max(ar[i],mx_a);
         mn_a=min(ar[i],mn_a);
         s1+=ar[i];
      }
      for(int i=0;i<m;i++){
         cin >> br[i];
         mx_b=max(br[i],mx_b);
         mn_b=min(br[i],mn_b);
         s2+=br[i];
      }
      if(k&1){
         if(mn_a<mx_b){
            cout << s1-mn_a+mx_b << endl;
         }
         else{
            cout << s1 << endl;
         }
      }
      else{
         if(mn_a<mx_b){
            int cur=s1-mn_a+mx_b;
            mn_b=min(mn_b,mn_a);
            mx_b=max(mx_b,mx_a);
            cout << cur-mx_b+mn_b << endl;
        }
        else{
            cout << s1-mx_a+mn_b << endl;
        }
      }
   }
}