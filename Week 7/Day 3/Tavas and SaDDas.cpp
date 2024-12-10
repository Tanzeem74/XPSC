#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s; cin >> s;
    int ans=0,x=0;
    for(int i=s.size()-1;i>=0;i--){
        int z=0;
        if(s[i]=='7')
            z=2;
        else
            z=1;
        ans+=(z*(1<<x));
        x++;
     }
     cout << ans << endl;
}
int main()
{
    faster
    int t=1; //cin >> t;
    while (t--)
        solution();
}