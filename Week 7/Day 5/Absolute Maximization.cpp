#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    int orr=0;
    //int andd=0;
    for(auto &i : v){
        cin >> i;
        orr|=i;
        //andd&=i;
    }
    int andd=v[0];
    for(auto i : v){
        andd&=i;
    }
    //cout << orr << " " << andd << endl;
    cout << orr-andd << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
