#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        vector<ll>idx;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                idx.push_back(n-i);
            }
        }
        reverse(idx.begin(),idx.end());
        ll pre[n+1]={0};
        for(int i=1;i<=idx.size();i++){
            pre[i]=pre[i-1]+idx[i-1]-i;
        }
        for(int i=1;i<=idx.size();i++){
            cout << idx[i-1]-i+pre[i-1] << " ";
        }
        for(int i=0;i<n-idx.size();i++){
            cout << "-1 ";
        }
        cout << endl;
    }
}