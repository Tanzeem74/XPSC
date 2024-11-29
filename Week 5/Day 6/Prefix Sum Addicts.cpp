#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,k; cin >> n >> k;
    vector<ll>pSum(k);
    for(int i=0;i<k;i++)
        cin >> pSum[i];
    if(k==1){
        cout << "YES" << endl;
        return;
    }
    vector<ll>v(n);
    for(int i=1;i<k;i++){
        v[i]=pSum[i]-pSum[i-1];
        if(i!=1 && v[i]<v[i-1]){
            cout << "NO" << endl;
            return;
        }
    }
    if((n-k+1)*v[1]>=pSum[0])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}