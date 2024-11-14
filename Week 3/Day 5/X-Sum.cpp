#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int n,m, mat[210][210];
int sol(int a,int b,int c,int d)
{
    int ans=0;
    while(a<n && b<m && a>=0 && b>=0){
           ans+=mat[a][b];
           a+=c;
           b+=d;
    }
    return ans;
}
void solution()
{
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=sol(i,j,-1,-1);
            sum+=sol(i,j,-1,+1);
            sum+=sol(i,j,+1,-1);
            sum+=sol(i,j,+1,+1);
            sum-=(3*mat[i][j]);
            result=max(result,sum);
        }
    }
    cout << result << endl;
}
int main()
{
    faster;
    int t = 1; cin >> t;
    while (t--)
        solution();
}
