#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    //vector<int>v(n);
    map<int,int>mp;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    cout << mx << endl;
    
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
