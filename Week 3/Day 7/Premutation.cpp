#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int mat[n][n-1];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin >> mat[i][j];
            if(j==0){
                mp[mat[i][j]]++;
            }
        }
    }
    int first,mx=-1;
    for(auto[x,y]:mp){
        if(y>mx){
            first=x;
            mx=y;
        }
    }
    //cout << first << endl;
    vector<int> ans;
    ans.push_back(first);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(mat[i][0]!=first){
                //cout << mat[i][j] << " ";
                ans.push_back(mat[i][j]);
            }
        }
    }
    for(auto v:ans) cout << v << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
