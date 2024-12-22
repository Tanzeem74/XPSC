#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution()
{
    int n,m; cin>>n>>m;
    char mat[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(mat[i][j]=='*')
            {
                int mx=i;
                for(int k=i+1;k<=n;k++)
                {
                    if(mat[k][j]=='.')
                    {
                        mx=k;
                    }
                    if(mat[k][j]=='o'){
                        break;
                    }
                }
                swap(mat[i][j],mat[mx][j]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
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
