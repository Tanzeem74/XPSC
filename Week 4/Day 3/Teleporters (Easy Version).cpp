#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,c; cin >> n >> c;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x+i+1);
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]>c)break;
        c-=v[i];
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
