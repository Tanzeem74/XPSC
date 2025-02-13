#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isVowel(char i){
    return (i=='a'||i=='e' || i=='i'||i=='o'||i=='u');
}
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        ll l=0,r=n;
        bool ok=false;
        while(l<=r){
            ll mid=(l+r)/2;
            ll x=n-mid;
            if((x*(x+1))/2-mid==k){
                cout << mid << endl;
                ok=true;
                break;
            }
            else if((x*(x+1)/2-mid>k)){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(!ok){
            cout << r << endl;
        }
    }
}