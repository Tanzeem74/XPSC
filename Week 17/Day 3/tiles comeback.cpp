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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int x=v[n-1],y=v[0];
        int l,r;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==y){
                cnt++;
            }
            if(cnt==k){
                l=i;
                break;
            }
        }
        bool ok=true;
        if(cnt<k){
            ok=false;
        }
        cnt=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==x){
                cnt++;
            }
            if(cnt==k){
                r=i;
                break;
            }
        }
        if(cnt<k){
            ok=false;
        }
        if(l<=r && ok || x==y && ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}