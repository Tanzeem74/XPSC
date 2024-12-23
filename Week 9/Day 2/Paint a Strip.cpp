#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int k=1,cnt=1;
    while(k<n){
        k=2+(2*k);
        cnt++;
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
