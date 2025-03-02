#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int gold=0,gv=0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            gold+=v[i];
        }
        if(v[i]==0 && gold>0){
            gv++;
            gold--;
        }
    }
    cout << gv << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}