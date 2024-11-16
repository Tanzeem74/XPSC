#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k,q; cin >> n >> k >> q;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll cnt=0;
    int j=0;
    ll ans=0;
    while(j<n){
        if(v[j]<=q){
            cnt++;
            if(cnt>=k)
                ans+=cnt+1-k;
        }
        else
            cnt=0;
        j++;
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
