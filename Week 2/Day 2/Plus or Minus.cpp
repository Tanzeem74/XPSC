#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int a,b,c; cin >> a >> b >> c;
    if(a+b==c) cout << "+" << endl;
    else if(a-b==c) cout << "-" << endl;  
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}