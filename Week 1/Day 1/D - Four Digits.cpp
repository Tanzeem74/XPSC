#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;

void solution(){
    ll n ; cin >> n;
    ll cnt=0;
    ll GivenNum=n;
    while(n>0){
        n/=10;
        cnt++;
    }
    cout << cnt << endl;
    if(cnt==4) cout << GivenNum << endl;
    else if(cnt==0) cout << "0000" << endl;
    else if (cnt==1) cout << "000" << GivenNum << endl;
    else if(cnt==2) cout << "00" << GivenNum << endl;
    else cout << "0" << GivenNum << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
