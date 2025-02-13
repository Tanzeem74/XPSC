#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        string s; cin >> s;
        ll ans=LLONG_MAX;
        for(char c='a';c<='z';c++){
            ll cnt=0,mx=0;
            for(int j=0;j<s.size();j++){
                if(s[j]==c){
                    mx=max(mx,cnt);
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
            mx=max(mx,cnt);
            ans=min(ans,mx);
        }
        ll result = 0;
        while(ans>0){
            ans/=2;
            result++;
        }
        cout << result << endl;
    }
}