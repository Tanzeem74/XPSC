#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int x,y,z; cin >> x >> y >> z;
        set<int>s;
        int n=50;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int xx=pow(x,i)*pow(y,j);
                if(z%xx==0){
                    int a=(z/xx);
                    s.insert(a);
                }
            }
        } 
        int sz=s.size();
        cout << sz << endl;
    }
}