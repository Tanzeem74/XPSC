#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int x=1, y=0,cnt=0;
    while(x*2<=n){
        x*=2;
        cnt++;
    }
    int ans=1;
    int ok=0;
    for (int i=cnt-1;i>=0;i--)
    {
        if ((n&1<<i))
        {
            y|=(1 << i);
            ok=1;
        }
        else{
            if (ok==1){
                ans *= 2;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    faster
    int t; cin >> t;
    while(t--)
        solution();
}