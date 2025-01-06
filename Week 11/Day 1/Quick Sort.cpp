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
        int n,k; cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(is_sorted(v.begin(),v.end())){
            cout << 0 << endl;
        }
        else{
            int cnt=0,j=1;
            for(int i=0;i<n;i++){
                if(v[i]==j){
                    j++;
                    cnt++;
                }
            }
            int ans=(n-cnt+k-1)/k;
            cout << ans << endl;
        }            
    }
}