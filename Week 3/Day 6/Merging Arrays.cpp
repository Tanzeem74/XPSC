#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    for(int i=0;i<n+m;i++)
        cout << ans[i] << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}
