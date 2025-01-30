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
        string s; cin >> s;
        string ans;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            ans+=s[i];
            if(s[i]=='b' || s[i]=='c' || s[i]=='d'){
                if(cnt>0){
                    ans+='.';
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
            else{
                cnt++;
            }
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
    }
}