#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>a(n),b(n-1);
    for(auto &i:b){
        cin >> i;
    }
    a[0]=b[0];
    for(int i=1;i<n-1;i++){
        a[i]=b[i-1]|b[i];
    }
    a[n-1]=b[n-2];
    int ok=0;
    for(int i=1;i<n;i++){
        if((a[i]&a[i-1])!=b[i-1]){
            //cout << -1 << endl;
            ok=1;
            //return;
        }
    }
    if(ok==1){
        cout << -1 << endl;
        return;
    }
    for(auto i : a){
        cout << i << " ";
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
