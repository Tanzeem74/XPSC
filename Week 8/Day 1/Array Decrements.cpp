#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>a(n),b(n);
    for(auto &i:a){
        cin >> i;
    }
    for(auto &i:b){
        cin >> i;
    }
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]-b[i]);
    }
    int ok=1;
    for(int i=0;i<n;i++){
        if(b[i]!=max((a[i]-mx),0)){
            ok=0;
        }
    }
    if(ok==1){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
