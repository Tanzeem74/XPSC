#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n),pSum(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        //sort(v.begin(),v.end());
        pSum[0]=v[0];
        for(int i=1;i<n;i++){
            pSum[i]=pSum[i-1]+v[i];
        }
        int q; cin >> q;
        while(q--){
            int k; cin >> k;
            auto it=lower_bound(pSum.begin(),pSum.end(),k);
            cout << it-pSum.begin()+1<< endl;
        }  
    }
}