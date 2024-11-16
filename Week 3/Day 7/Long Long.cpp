#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int> a(n);
    ll sum=0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum+=abs(a[i]);
    }
    int cnt=0,ok=0;
    for (int i=0;i<n;i++){
        if(a[i]==0) continue;
        if (a[i]<0){
            if(ok==0){
                cnt++;
                ok=1;
            }
        }
        else ok=0;
    }
 
    cout << sum << " " << cnt << endl;
}
 
int main() {
    faster
    int t; cin >> t;
    while (t--)
        solution();
}