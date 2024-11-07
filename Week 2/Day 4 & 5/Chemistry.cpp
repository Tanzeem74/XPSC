#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<char,int>mp;
    for(char c : s){
        mp[c]++;
    }
    int cnt=0;
    for(auto [x,y] : mp){
        if(y%2==1) cnt++;
    }
    if(cnt==1 && k<=n) cout << "yes" << endl;
    else{
        cnt-=k;
        if(cnt<=1) cout << "yes" << endl;
        else cout << "no" << endl;
    }

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}