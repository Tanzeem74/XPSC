#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        int ans=0;
        for(int i=0;i<(k/2);i++){
            int mp[26]={0};
            int x=0,mx=0;
            for(int j=i;j<n;j+=k){
                mp[s[j]-'a']++;
                x++;
            }
            for(int j=k-i-1;j<n;j+=k){
                mp[s[j]-'a']++;
                x++;
            }
            for(int j=0;j<26;j++){
                mx=max(mx,mp[j]);
            }
            ans+=(x-mx);
        }
        if(k&1){
            int mp[26]={0};
            int x=0,mx=0;
            for(int j=(k/2);j<n;j+=k){
                mp[s[j]-'a']++;
                x++;
            }
            for(int i=0;i<26;i++){
                mx=max(mx,mp[i]);
            }
            ans+=(x-mx);
        }
        cout << ans << endl;
    }
}