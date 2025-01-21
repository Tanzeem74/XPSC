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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int f=*v.begin();
        bool ok=false;
        for(int i=1;i<n;i++){
            if((v[i]%f!=0) && (v[i]!=f)){
                cout << "YES" << endl;
                ok=true;
                break;
            }
        }
        if(!ok){
            if(f!=v[1]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}