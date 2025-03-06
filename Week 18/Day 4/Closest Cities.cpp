#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n; cin>>n;
    int a[n+5],pre[n+5],suf[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    pre[0]=0 ;
    pre[1]=1;
    for(int i=1;i<n-1;i++){
        if((a[i]-a[i-1])<(a[i+1]-a[i])){
            pre[i+1]=pre[i]+abs(a[i+1]-a[i]);
        }
        else{
            pre[i+1]=pre[i]+1;
        }
    }
    suf[n-1]=0;
    suf[n-2]=1;
    for(int i=n-2;i>0;i--){
        if((a[i]-a[i-1])>(a[i+1]-a[i]))
        {
            suf[i-1]=suf[i]+abs(a[i-1]-a[i]);
        }
        else{
            suf[i-1]=suf[i]+1;
        }
    }
    int q; cin>>q;
    while(q--){
        int x,y; cin >> x >>y;
        x--; y--;
        if(x<y){
            cout<<pre[y]-pre[x]<<endl;
        }
        else{
            cout<<suf[y]-suf[x]<<endl;
        }     
    }
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}