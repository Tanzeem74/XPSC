#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    string a=s;
    reverse(s.begin(), s.end());
    string b=s+a;
    cout << min(a,b) << '\n';
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
