#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &i:v){
        cin >> i;
    }
    /*if(is_sorted(v.begin(),v.end())){
        cout << 0 << endl;
        return;
    }*/
    int cnt=0;
    for(int i=n-2;i>=0;i--){
        while(v[i]>=v[i+1] && v[i]!=0){
            v[i]/=2;
            cnt++;
        }
        if(v[i]>=v[i+1] || (v[i]==0 && i>0)){
            cnt=-1;
            break;
        }
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
