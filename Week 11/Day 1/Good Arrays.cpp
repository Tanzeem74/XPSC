#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll>v(n);
        for(auto &i : v){
            cin >> i;
        }
        ll cnt1=0,sum=0;
        for(auto i : v){
            if(i==1){
                cnt1++;
            }
            sum+=i;
        }
        if(sum-n>=cnt1 && n>1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}