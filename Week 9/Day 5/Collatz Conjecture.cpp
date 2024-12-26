#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll x,y,k; cin >> x >> y >> k;
    while(x>1){
        ll a=y-(x%y);
        if(a>=k){
            x+=k;
            k=0;
        }
        else{
            x+=a;
            k-=a;
        }
        while(x%y==0){
            x/=y;
        }
        if(k<=0){
            break;
        }
    }
    if(k>0){
        k=k%(y-1);
        x+=k;
        while(x%y==0){
            x/=y;
        }
    }
    cout << x << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
