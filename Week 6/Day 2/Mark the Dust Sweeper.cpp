#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n ; cin >> n;
    vector<int>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(i!=n-1)
            sum+=v[i];
    }
    int j=-1;
    for(int i=0;i<n-1;i++){
        if(v[i]>0){
            j=i;
            break;
        }
    }
    ll zero=0;
    if(j!=-1){
        for(int i=j;i<n-1;i++){
            if(v[i]==0)
                zero++;
        }
    }
    cout << sum+zero << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
