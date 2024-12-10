#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int countOne(ll x){
    int cnt=0;
    while(x){
        x=x&(x-1);
        cnt++;
    }
    return cnt;
}
void solution(){

    int n,m,k; cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i=0;i<m+1;i++){
        cin >> v[i];
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        int exor=v[i]^v[m];
        if(countOne(exor)<=k){
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
