#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++){
        int a; cin >> a;
        string s; cin >> s;
        for(auto c : s){
            if(c=='D'){
                v[i]++;
                if(v[i]>9)
                    v[i]=0;
            }
            if(c=='U'){
                v[i]--;
                if(v[i]<0)
                    v[i]=9;
            }
        }
    }
    for (auto val : v) cout << val << " ";
    cout <<  endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}