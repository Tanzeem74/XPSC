#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    ll n,s; cin >> n >> s;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int i=0,j=0;
    ll sum=0,result=0;
    while(j<n){
        sum+=v[j];
        if(sum<=s) result+=(j-i+1);
        else{
            while(sum>s){
                sum-=v[i];
                i++;
            }
            if(sum<=s) result+=(j-i+1);
        }
        j++;
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
