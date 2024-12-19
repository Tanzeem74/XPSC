#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int res=INT_MAX;
    for (char c='a';c<='z';c++) {
      int l=0,r=n-1;
      int ans=0;
      while(l<r){
        if(s[l]==s[r]){
          l++,
          r--;
        }
        else if(s[l]==c){
            l++,
            ans++;;
        }
        else if(s[r]==c){
            r--,
            ans++;
        }
        else {
          ans=INT_MAX;
          break;
        }
      }
      res=min(res,ans);
    }
    if (res==INT_MAX){
        res = -1;
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
