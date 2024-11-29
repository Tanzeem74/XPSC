#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<ll>even,odd;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x%2==1)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    if(odd.size()==0 || even.size()==0){
        cout << 0 << endl;
        return;
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    ll mxOdd=odd.back();
    int cnt=0;
    for(int i=0;i<even.size();i++){
        if(even[i]>mxOdd){
            cout << even.size()+1 << endl;
            return;
        }
        else{
            cnt++;
            mxOdd+=even[i];
        }
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}