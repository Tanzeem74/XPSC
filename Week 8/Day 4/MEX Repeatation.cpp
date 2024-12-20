#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    ll sum=(n*(n+1))/2;
    deque<ll>d;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        d.push_back(x);
        sum-=x;
    }
    ll mex=sum;
    ll m=k%(n+1);
    for(ll i=0;i<m;i++){
        ll last=d.back();
        d.pop_back();
        d.push_front(mex);
        mex=last;
    }
    for(auto i : d){
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
