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
        int n,q; cin >> n >> q;
        vector<ll> v(n),pSum(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        pSum[0]=v[0];
        for(int i=1;i<n;i++){
            pSum[i]=pSum[i-1]+v[i];
        }
        for(int i=1;i<n;i++){
            v[i]=max(v[i-1],v[i]);
        }
        while(q--){
            int k; cin >> k;
            auto it=upper_bound(v.begin(),v.end(),k);
            //cout << *it << " ";
            int i=it-v.begin();
            if(i-1<0){
                cout << 0 <<" ";
            }
            else{
                cout << pSum[i-1] << " ";
            }
        }
        cout << endl;
    }
}