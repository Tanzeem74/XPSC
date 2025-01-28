#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        int xxor=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            xxor^=v[i];
        }
        int ans=0,cnt=0;
        for(auto i :v){
            ans^=i;
            if(ans==xxor){
                ans=0;
                cnt++;
            }
        }
        if(xxor==0 || cnt>2){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}