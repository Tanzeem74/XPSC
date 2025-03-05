#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n,x,y; cin >> n >> x >> y;
    int mn=min(x,y);
    int ans=(n+mn-1)/mn;
    cout << ans << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}