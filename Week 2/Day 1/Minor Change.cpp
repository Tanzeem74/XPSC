#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s,t; cin >> s >> t;
    int result=0;
    for(int i=0;i<t.size();i++){
        if(s[i]!=t[i]) result++;
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