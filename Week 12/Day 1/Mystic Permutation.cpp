#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(auto &i : v){
            cin >> i;
        }
        if(n==1){
            cout << -1 << endl;
            continue;
        }
        vector<int>v1=v;
        sort(v1.begin(),v1.end());
        for(int i=0;i<n-1;i++){
            if(v1[i]!=v[i]){
                continue;
            }
            swap(v1[i],v1[i+1]);
        }
        if(v1[n-1]==v[n-1]){
            swap(v1[n-1],v1[n-2]);
        }
        for( auto i : v1){
            cout << i << " ";
        }
        cout << endl;
    }
}