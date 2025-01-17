#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        vector<int>v(n),v1(m);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<int,int>mp;
        for(int i=0;i<m;i++){
            cin >> v1[i];
            mp[v1[i]]++;
        }
        int ok=0,ans=0;
        map<int,int>mp1;
        for(int i=0,j=0;i<n;i++){
            if(i<m-1){
                if(mp.find(v[i])!=mp.end() && mp[v[i]]>mp1[v[i]]){
                    ok++;
                }
                mp1[v[i]]++;
            }
            else{
                if(mp.find(v[i])!=mp.end() && mp[v[i]]>mp1[v[i]]){
                    ok++;
                }
                mp1[v[i]]++;
                if(ok>=k){
                    ans++;
                }
                mp1[v[j]]--;
                if(mp.find(v[j])!=mp.end() && mp[v[j]]>mp1[v[j]]){
                    ok--;
                }
                j++;
            }
        }
        cout << ans << endl;
    }
}