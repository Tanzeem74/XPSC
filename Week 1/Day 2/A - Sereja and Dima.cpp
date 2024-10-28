#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int S=0,D=0,move=1;
    while(!v.empty())
    {
        if(move==1){
            if(v[0]>v.back()){
                S+=v[0];
                v.erase(v.begin());
            }
            else{
                S+=v.back();
                v.pop_back();
            }
            move=2;
        }
        else{
            if(v[0]>v.back()){
                D+=v[0];
                v.erase(v.begin());
            }
            else{
                D+=v.back();
                v.pop_back();
            }
            move=1;
        }
    }
    cout << S << " " << D << endl; 
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
    {
        solution();
    }
 
    return 0;
}