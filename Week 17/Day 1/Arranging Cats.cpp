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
        string s,t; cin >> s >> t;
        int d1=0,d2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && t[i]=='0'){
                d1++;
            }
            else if(s[i]=='0' && t[i]=='1'){
                d2++;
            }
        }
        cout << max(d1,d2) << endl;
    }
}