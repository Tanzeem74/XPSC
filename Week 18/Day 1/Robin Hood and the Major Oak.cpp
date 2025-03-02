#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    ll odd=0;
    if(n%2==0){
       odd=k/2; 
    }
    else{
        k++;
        odd=k/2;
    }
    if(odd%2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}