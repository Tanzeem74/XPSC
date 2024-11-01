#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,q; cin >> n >> q;
    map<string,string>mp;
    while(n--){
        string nm,ip; cin >> nm >> ip;
        mp[ip]=nm;
    }
    while(q--){
        string nm1,ip1; cin >> nm1 >> ip1;
        ip1.erase(ip1.size()-1);
        cout << nm1 << " " << ip1 << "; #"<< mp[ip1] << endl;
    }

}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
