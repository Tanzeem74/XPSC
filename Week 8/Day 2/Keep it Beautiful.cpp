#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if((a.empty() || x>=a.back()) && b.empty()){
            a.push_back(x);
            cout << 1 ;
        }
        else if(x<=a[0] && (b.empty() || b.back()<=x)){
            b.push_back(x);
            cout << 1 ;
        }
        else{
            cout << 0 ;
        }
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
