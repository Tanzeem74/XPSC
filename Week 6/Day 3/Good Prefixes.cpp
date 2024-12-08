#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<ll>v(n);
    multiset<ll>ml;
    ll cnt=0,sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        ml.insert(v[i]);
        sum+=v[i];
        ll mx=*ml.rbegin();
        if(sum==2*mx)
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
