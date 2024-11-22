#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    map<ll,ll>mp;
    ll i=0,j=0,unq=0,result=0;
    while(j<n){
        mp[v[j]]++;
        if(mp[v[j]]==1)
            unq++;
        while(unq>k){
            mp[v[i]]--;
            if(mp[v[i]]==0)
                unq--;
            i++;
        }
        result+=j-i+1;
        j++;
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
