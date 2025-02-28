#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
ll lcm(ll a , ll b){
    return (a*b)/(__gcd(a,b));
}
void wrong(){
    ll n,x,y; cin >> n >> x >> y;
    ll cnt1=(n/x),cnt2=(n/y);
    ll diff=(n/(lcm(x,y)));
    cnt1-=diff;
    cnt2-=diff;
    ll s1=(n*(n+1))/2-((n-cnt1)*((n-cnt1)+1))/2;
    ll s2=(cnt2*(cnt2+1))/2;
    cout << s1-s2 << endl;
 

}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}