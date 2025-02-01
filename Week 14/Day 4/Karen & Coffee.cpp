#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
const int mx=200005;
void solution(){
    ll n,k,q; cin >> n >> k >>q;
    ll ar[mx]={0};
    for(int i=1;i<=n;i++){
        ll l,r; cin >> l >> r;
        ar[l]++;
        ar[r+1]--;
    }
    for(int i=1;i<mx;i++){
        ar[i]+=ar[i-1];
    }
    for(int i=1;i<mx;i++){
 
        if(ar[i]>=k){
            ar[i]=1;
        }
        else{
            ar[i]=0;
        }
    }
    for(int i=1; i<mx; i++){
        ar[i]+=ar[i-1];
    }
    while(q--){
        ll l,r; cin >> l>> r;
        cout << ar[r]-ar[l-1] << endl;
    }
}
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        solution();
    }
}