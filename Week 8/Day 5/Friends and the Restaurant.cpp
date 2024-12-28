#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n;cin >> n;
    vector<int>a(n),v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        int x; cin >> x;
        a[i]=(x-v[i]);

    }
    sort(a.begin(),a.end());
    int cnt=0;
    int l=0,r=n-1;
    while(l<r){
        int cur=(a[l]+a[r]);
        if(cur>=0){
            cnt++;
        }
        if(cur>=0){
            l++,
            r--;
        }
        else{
            l++;
        }
    }
    cout << cnt << endl;
}        
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
