#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n; cin >> n;
    string s; cin >> s;
    ll x=0;
    ll i=0,cng=0;
    vector<int>v;
    for(char c:s){
        int l=i,r=n-1-i;
        if(c=='R'){
            if(l>r){
                cng++;
                x+=l;
                v.push_back(l-r);
            }
            else
                x+=r;
        }
        else{
            if(r>l){
                cng++;
                x+=r;
                v.push_back(r-l);
            }
            else
                x+=l;
        }
        i++;
    }
    vector<ll>result(n+1);
    for(int i=cng;i<=n;i++) result[i]=x;
    sort(v.rbegin(),v.rend());
    for(int i=cng-1;i>=1;i--){
        x=x-v.back();
        v.pop_back();
        result[i]=x;
    }
    for(int i=1;i<=n;i++) cout << result[i] << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
