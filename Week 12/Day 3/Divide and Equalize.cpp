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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=2;j*j<=v[i];j++){
                if(v[i]%j==0){
                    while(v[i]%j==0){
                        mp[j]++;
                        v[i]/=j;
                    }
                }
            }
            if(v[i]>1){
                mp[v[i]]++;
            }
        }
        bool ok=true;
        for(auto[x,y] : mp){
            if(y%n!=0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}