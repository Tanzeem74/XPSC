#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int i=1,j=3*n-2;
    vector<pair<int,int>>v;
    int cnt=0;
    while(i<j){
        v.push_back(make_pair(i+1,j));
        cnt++;
        i+=3;
        j-=3;
    }
    cout << cnt << endl;
    for(auto [x,y]:v)
        cout << x << " " << y << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
