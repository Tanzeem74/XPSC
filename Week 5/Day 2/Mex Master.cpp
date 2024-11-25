#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int cnt0=0;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    if(mp[0]<=(n+1)/2)
        cout << 0 << endl;
    else{
        sort(v.begin(),v.end());
        if(v.back()==1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
