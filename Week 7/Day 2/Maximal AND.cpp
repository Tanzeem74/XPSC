#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool checkOnOff(int n,int k){
    return ((1<<k)&n);
}
void solution(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        for(int j=30;j>=0;j--){
            if((v[i]>>j)&1){
                mp[j]++;
            }
        }
    }
    int ans=0;
    for(int i=30;i>=0;i--){
        if(mp[i]==n){
            ans+=(1<<i);
        }
        else{
            int need=n-mp[i];
            if(k>=need){
                ans+=(1<<i);
                k-=need;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
