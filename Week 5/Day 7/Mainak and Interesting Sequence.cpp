#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    if(n>m || (n%2==0 && m%2==1)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> v(n+1);
    int sum=0;
    if(n%2==0 && m%2==0){
        for(int i=1;i<=n-2;i++){
            v[i]=1;
            sum++;
        }
        v[n-1]=(m-sum)/2;
        v[n]=(m-sum)/2;
    }
    else if(n%2==1 && m%2==0){
        for(int i=1;i<=n-1;i++){
            v[i]=1;
            sum++;
        }
        v[n]=m-sum;
    }
    else if(n%2==1 && m%2==1){
        for(int i=1;i<=n-1;i++){
            v[i]=1;
            sum++;
        }
        v[n]=m-sum;
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}