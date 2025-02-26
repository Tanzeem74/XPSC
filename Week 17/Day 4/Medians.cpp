#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n,k; cin >> n >> k;
    if(n==1){
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if(n==k || k==1){
        cout << -1 << endl;
        return;
    }
    cout << 3 << endl;
    if((n-k)%2==1){
        cout << 1 << " " << k << " " << k+1 << endl;
        return;
    }
    cout << 1 << " " << k-1 << " " << k+2 << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}