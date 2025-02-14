#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin >> p[i].first;
        }
        for(int i=0;i<n;i++){
            cin >> p[i].second;
        }
        sort(p,p+n);
        for(int i=0;i<n;i++){
            cout << p[i].first << " ";
        }
        cout << endl;
        for(int i=0;i<n;i++){
            cout << p[i].second << " ";
        }
        cout << endl;
    }
}