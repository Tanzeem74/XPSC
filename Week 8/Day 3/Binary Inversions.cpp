#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
ll cnt(ll *a,ll n){
    ll res=0,one=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            one++;
        }
        else{
            res+=one;
        }
    }
    return res;
}
void solution(){
    ll n; cin >> n;
    ll a[n];   
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll res=cnt(a,n);
    ll f=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            f=i;
            break;
        }
    }
    res=max(res,cnt(a,n));
    if(f!=-1){
        a[f]=0;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            break;
        }
    }
    res=max(res,cnt(a,n));
    cout << res << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
