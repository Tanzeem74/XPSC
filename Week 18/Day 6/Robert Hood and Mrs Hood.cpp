#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

   faster 
   int t=1; cin >> t;
   while(t--){
      int n,d,k; cin >> n >> d >> k;
      vector<int>diff(n+7,0);
      for(int i=0;i<k;i++){
         int a,b; cin >> a >> b;
         int mx=max(1,a-d+1);
         int mn=min(b,n-d+1);
         diff[mx]++;
         diff[mn+1]--;
      }
      vector<int>v(n+1);
      v[1]=diff[1];
      for(int i=2;i<=n;i++){
         v[i]=diff[i]+v[i-1];
      }
      int mx=INT_MIN,mn=INT_MAX;
      int a,b;
      for(int i=1;i<=n-d+1;i++){
         if(v[i]>mx){
            mx=v[i];
            a=i;
         }
         if(v[i]<mn){
            mn=v[i];
            b=i;
         }
      }
      cout << a << ' ' << b << endl;

   }
}