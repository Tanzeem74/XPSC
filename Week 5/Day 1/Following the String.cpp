#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<char,int>mp;
    for(char i='a';i<='z';i++)
        mp[i]=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        for(auto[x,y]:mp){
            if(y==v[i]){
                cout << x ;
                mp[x]++;
                break;
            }
        }
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
