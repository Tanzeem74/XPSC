#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    faster
    vector<bool> prime(1e7+1,true);
    for (int i=2;i*i<=1e7;i++){
        if (prime[i]){
            for (int j=i+i;j<=1e7;j+=i){
                prime[j]=false;
            }
        }
    }

    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll>v;
        v.push_back(1);
        for(int i=2; ;i++){
            if(v.size()==3){
                break;
            }
            if(prime[i] && i-v.back()>=n){
                v.push_back(i);
            }
        }
        cout << v[2]*v[1] << endl;

    }
}