#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution()
{
    int n ; cin >> n;
    string s; cin >> s ;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='@')
            ans++;
        else if(s[i]=='*' && s[i+1]=='*')
            break;
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}