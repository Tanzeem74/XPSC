#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &i : v)
        cin >> i;
    for(int mask=0;mask<(1<<n);mask++){
        int total=0;
        for(int i=0;i<n;i++){
            if((mask>>i) & 1){
                //cout << 1 << " ";
                total+=v[i];
            }
            else{
                //cout << 0 << " ";
                total-=v[i];
            }
        }
        if(total%360==0){
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
