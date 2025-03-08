#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n; cin >> n;
    vector<int> v(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        s+=v[i];
    }
    if(n==1 || n==2){
        cout << -1 << endl;
        return;
    }
    sort(v.begin(),v.end());
    ll avg=v[n/2]*2; 
    ll a=(avg*n)-s;
    cout << max(0LL, a+1) << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}