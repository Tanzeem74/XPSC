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
      int n; cin >> n;
      vector<int>v(n);
      int x=0;
      for(int i=0;i<n;i++){
         x^=i;
      }
      if(x==0){
         for(int i=1;i<n;i++){
            cout << i << " ";
         }
         cout << 0 << endl;
      }
      else{
         x^=(n-1);
         if(x==0){
            x^=(n-2);
            for(int i=0;i<n-2;i++){
               cout << i << " ";
            }
         }
         else{
            for(int i=1;i<n-1;i++){
               cout << i << " ";
            }
         }
         int z=(1<<29)-1;
         x^=z;
         cout << x << " " << z << endl;
      }
   }
}