#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll>v(n);
        map<ll,ll>mp;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
            mp[v[i]]++;
        }
        stack<ll>stk;
        stk.push(sum);
        ll cnt=0;
        bool ok=false;
        while(!stk.empty()){
            ll top= stk.top();
            stk.pop();
            if(mp[top]>0){
                mp[top]--;
            }
            else{
                stk.push(top/2);
                stk.push((top+1)/2);
                cnt++;
                if(cnt>=n){
                    cout << "NO" << endl;
                    ok=true;
                    break;
                }
            }
        }
        if(!ok){
            cout << "YES" << endl;
        }
    }
}