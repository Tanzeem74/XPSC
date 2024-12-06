#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int gcd(int a,int b){
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
void solution(){
    int n; cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(abs(i+1-x));
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=gcd(v[i],res);
    }
    cout << res << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}