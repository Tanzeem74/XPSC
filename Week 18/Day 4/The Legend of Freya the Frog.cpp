#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int x,y,k; cin >> x >> y >> k;
    y=(y+k-1)/k;
    x=(x+k-1)/k;
    if(y>=x){
        cout << 2*y << endl;
    }
    else{
        cout << 2*x-1 << endl;
    }
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}