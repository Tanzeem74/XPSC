#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    ll d1=0,d2=0;
    for(int i=1;i<=n;i++){
        if(i&1){
            d1=__gcd(d1,v[i]);
        }
        else{
            d2=__gcd(d2,v[i]);
        }
    }
    //cout << d1 << " " << d2 << endl;
    bool flag=true;
    for(int i=1;i<=n;i++){
        if(i&1){
            if(v[i]%d2==0){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout << d2 << endl;
    }
    else if(!flag){
        flag=true;
        for(int i=1;i<=n;i++){
            if((i&1)==0){
                if(v[i]%d1==0){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout << d1 << endl;
        }
        else if(!flag){
            cout << 0 << endl;
        }
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
