#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        vp[i].first=v[i];
        vp[i].second=i+1;
    }
    sort(vp.begin(),vp.end());
    map<int,pair<int,int>>mp;
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=n-1;i>=0;i--){
        mx=max(mx,vp[i].second);
        mn=min(mn,vp[i].second);
        mp[i]={mx,mn};
    }
    sort(v.begin(),v.end());
    map<int,int>ansMP;
    for(int i=0;i<n;i++){
        ansMP[v[i]]=max(ansMP[v[i]],((mp[i].first-mp[i].second+1)*2));
    }
    for(int i=1;i<=k;i++){
        cout << ansMP[i] << " ";
    }
    cout << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}