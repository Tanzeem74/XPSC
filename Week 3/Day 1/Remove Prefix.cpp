#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
        cin >> v[i];
    int i;
    for(i=n-1;i>=0;i--){
        if(mp[v[i]]>0) break;
        else mp[v[i]]++;
    }
    cout << i+1 << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
