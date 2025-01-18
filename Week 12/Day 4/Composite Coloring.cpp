#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
vector<int> p={ 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31};
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
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(v[i]%p[j]==0){
                    mp[p[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int>ans(n);
        int clr=1;
        for(auto [x,y] : mp){
            for(auto pos : y){
                ans[pos]=clr;
            }
            clr++;
        }
        cout << mp.size() << endl;
        for(auto i : ans){
            cout << i <<  " ";
        }
        cout << endl;
    }
}