#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(31,0);
    for(int i=0;i<30;i++){
        if(1ll&(n>>i)){
            if(v[i]!=0){
                v[i+1]=1;
                v[i]=0;
            }
            else if(i>0){
                if(v[i-1]==1){
                    v[i+1]=1;
                    v[i-1]=-1;
                }
                else{
                    v[i]=1;
                }
            }
            else{
                v[i]=1;
            }
        }
    }
    cout << v.size() << endl;
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
