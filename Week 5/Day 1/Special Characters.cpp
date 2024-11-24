#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    if(n%2==1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i=1;i<=(n/2);i++){
        if(i%2==1)
            cout << "TT";
        else
            cout << "HH";
    }
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
