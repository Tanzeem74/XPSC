#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
const int maxN = (1<<17)+9;
ll a[maxN],t[maxN*4];
int merge(int ansL,int ansR,int len){
   int pw=0;
   pw=__lg(len);
   if(pw%2!=0){
      return (ansL|ansR);
   }
   else{
      return (ansL^ansR);
   }
}
void build(int n,int b,int e){
   if(b==e){
      t[n]=a[b];
      return;
   }
   int mid=(b+e)/2,l=2*n,r=(2*n)+1;
   build(l,b,mid);
   build(r,mid+1,e);
   t[n]=merge(t[l],t[r],e-b+1);
}
void update(int n,int b,int e,int i,int v){
   if(i<b || i>e){
      return;
   }
   if(b==e){
      t[n]=v;
      return;
   }
   int mid = (b+e)/2,l=2*n,r=(2*n)+1;
   update(l,b,mid,i,v);
   update(r,mid+1,e,i,v);
   t[n]=merge(t[l],t[r],e-b+1);
}
int main(){
   faster
   int n, m; cin >> n >> m;
   n=(1 << n);
   for(int i=1;i<=n;i++){
      cin >> a[i];
   }
   build(1,1,n);
   while (m--){
      int i,x; cin >> i >> x;
      update(1,1,n,i,x);
      cout << t[1] << endl;
   }
}