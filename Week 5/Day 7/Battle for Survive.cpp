#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    ll lastfight=v.back();
    ll rating=0;
    for(int i=0;i<n-2;i++){
        rating+=v[i];
    }
   // cout << rating << endl;
    //rating=-1*rating;
    cout << lastfight+rating-v[n-2] << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}