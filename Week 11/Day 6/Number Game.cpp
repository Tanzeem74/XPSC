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
        int n; cin >> n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            mp[x]++;
        }
        int k=mp[1];
        int  res=k,x=k;
        for(int i=2;i<=k;i++){
            x+=mp[i];
            k=x-(i-1);
            res=min(res,x-(i-1));
        }
        cout << res << endl;
    }
}