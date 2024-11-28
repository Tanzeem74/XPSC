#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>ans;
    int a=1,b=n*n;
    for(int i=1;i<=n*n;i++){
        if(i%2==1){
            ans.push_back(a);
            a++;
        }
        else{
            ans.push_back(b);
            b--;
        }
    }
    /*for(auto v : ans)
        cout << v << " ";
    cout << endl;*/
    int k=0;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=k;j<n+k;j++){
                cout << ans[j] << " ";
            }
            cout << endl;
            k+=n;
        }
        else{
            for(int j=n+k-1;j>=k;j--)
                cout << ans[j] << " ";
            cout << endl;
            k+=n;
        }
    }
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}