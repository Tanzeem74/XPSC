#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,m; cin >> n >> m ;
    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    ll i=0,j=0;
    ll result=0;
    while(i<n && j<m){
        ll curr=a[i],cnt1=0,cnt2=0;
        while(i<n && a[i]==curr){
            i++;
            cnt1++;
        }
        while(j<m && curr>b[j]) j++;
        while(j<m && b[j]==curr){
            j++;
            cnt2++;
        }
        result+=cnt1*cnt2;
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
