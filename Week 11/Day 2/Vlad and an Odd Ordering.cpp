#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int pos,pre=0;
        for(int i=1;i<=1e9;i*=2){
            pos=pre+1+(n-i)/(i*2);
            if(k<=pos){
                cout << i+(k-1)*(i*2) << endl;
                break;
            }
            else{
                k-=pos;
            }
        }
    }
}