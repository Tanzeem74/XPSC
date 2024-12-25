#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solution(){
    int l,r; cin >> l >> r;
    if((r>l || (r&1)==0) && r>3){
        cout << r/2 << " " << r/2 << endl;
        return;
    }
    for(int i=3;i*i<=r;i+=2){
        if((r%i)==0){
            cout << i << " " << r-i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
