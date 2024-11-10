#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x>0)
            mp[x]++;
    }
    int sz=mp.size();
    if(sz==0 || sz==1) cout << "YES" << endl;
    else cout << "NO" <<endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
