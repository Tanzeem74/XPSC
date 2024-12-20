#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    for(auto &i : v){
        cin >> i;
    }
    if(is_sorted(v.begin(),v.end())){
        cout << 0 << endl;
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(abs(v[i]-(i+1))%k){
            cnt++;
        }
    }
    if(cnt==2){
        cout << 1 << endl;
    }
    else if(cnt>2){
        cout << -1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
