#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int a,b,c; cin >> a >> b >> c;
    if(a==1){
        cout << 1 << endl;
        return;
    }
    int lift1=a-1;
    int lift2;
    if(c>b)
        lift2=(c-b)+(c-1);
    else
        lift2=b-1;
    if(lift1>lift2) cout << 2 << endl;
    else if(lift1<lift2) cout << 1 << endl;
    else cout << 3 << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
