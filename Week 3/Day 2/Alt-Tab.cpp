#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<string> st(n);
    for(int i=0;i<n;i++) cin >> st[i];
    map<string,int>mp;
    string result;
    for(int i=n-1;i>=0;i--){
        mp[st[i]]++;
        if(mp[st[i]]==1){
            string s=st[i];
            int sz=s.size();
            result+=s[sz-2];
            result+=s[sz-1];
        }
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
