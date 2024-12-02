#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    int mxCntr=INT_MIN;
    for(int i=0;i<n;i++)
        mxCntr=max(mxCntr,mp[v[i]]);
    //cout << mxCntr << endl;
    int cnt=0;
    while(mxCntr<n){
        int r=n-mxCntr;
        int add=mxCntr;
        int mn=min(r,add);
        cnt+=mn+1;
        mxCntr+=mn;
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}