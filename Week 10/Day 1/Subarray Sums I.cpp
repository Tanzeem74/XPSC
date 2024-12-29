#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k ;
    vector<int>v(n);
    for(auto &i : v){
        cin >> i;
    }
    int l=0,r=0;
    int sum=0,cnt=0;
    while(l<n){
        sum+=v[l];
        while(sum>k){
            sum-=v[r];
            r++;
        }
        if(sum==k){
            cnt++;
        }
        l++;
    }
    cout << cnt << endl;
}
int main(){
    faster
    int t = 1; // cin >> t;
    while (t--){
        solution();
    }
    return 0;
}