#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(char c : s){
        if(c!='?'){
            mp[c]++;
        }
    }
    int res=0;
    for(auto[x,y] : mp){
        res+=min(y,n);
    }
    cout << res << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
