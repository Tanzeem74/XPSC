#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        string str; cin >> str;
        ll b,s,c; cin >> b >> s >> c;
        ll bb,ss,cc; cin >>bb >> ss >> cc;
        ll price; cin >> price;
        ll B=0,S=0,C=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='B'){
                B++;
            }
            else if(str[i]=='C'){
                C++;
            }
            else{
                S++;
            }
        }
        ll l=0,r=1e15,ans=0,mid;
        while(l<=r){
            mid=(l+r)/2;
            ll x=max(0ll,B*mid-b);
            ll y=max(0ll,S*mid-s);
            ll z=max(0ll,C*mid-c);
            ll totalCost=bb*x+ss*y+cc*z;
            if(totalCost<=price){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout << ans << endl;
    }
}