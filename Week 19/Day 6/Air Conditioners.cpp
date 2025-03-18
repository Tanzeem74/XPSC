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
      ll n,k; cin >> n >> k;
      ll ar[maxN],br[maxN],l[maxN],r[maxN];
      for(int i=0;i<=n;i++){
         ar[i]=1e18;
         r[i]=l[i]=1e18;
      }
      for(int i=0;i<k;i++){
         cin >> ar[i];
         ar[i]--;
      }
      for(int i=0;i<k;i++){
         ll x; cin >> x;
         br[ar[i]]=x;
      }
      ll cur=br[0];
      l[0]=br[0];
      for(int i=1;i<n;i++){
         cur++;
         l[i]=min(br[i],1LL*cur);
         cur=l[i];
      }
      cur=br[n-1];
      r[n-1]=br[n-1];
      for(int i=n-2;i>=0;i--){
         cur++;
         r[i]=min(br[i],1LL*cur);
         cur=r[i];
      }
      for(int i=0;i<n;i++){
         cout<< min(l[i], r[i]) <<" ";
      }
      cout << endl;
   }
}