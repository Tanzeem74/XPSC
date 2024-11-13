#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    vector<int>v(n),v1(m),result;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) cin >> v1[i];
    int i=0,j=0,cnt=0;
    while(i<m){
        if(j<n && v1[i]>v[j]){
            cnt++;j++;
        }
        else{
            result.push_back(cnt);
            i++;
        }
    }
    for(auto v:result) cout << v << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
