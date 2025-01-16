#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int N=1e6+7;
vector<int>divisors(N);
int main()
{

    faster
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            divisors[j]++;
        }
    }
    int t=1; cin >> t;
    while(t--){
        int x; cin >> x;
        cout << divisors[x] << endl;
    }
}