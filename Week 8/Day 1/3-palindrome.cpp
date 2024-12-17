#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string ans="";
    while(n>0){
        int cnt=0,cnt2=0;
        while(cnt<=1 && n>0){
            ans+='a';
            cnt++;
            n--;
        }
        while(cnt2<=1 && n>0){
            ans+='b';
            cnt2++;
            n--;
        }
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
