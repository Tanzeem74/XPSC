#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    vector<pair<int,int>>result;
    for(int i=0;i<n-1;i++){
        auto it=v.end();
         it--;
        int x=*it;
        v.erase(it);
        it--;
        int y=*it;
        v.erase(it);
        result.push_back({x,y});
        int z=((x+y+1)/2);
        v.push_back(z);
    }
    cout << *v.begin() << endl;
    for(auto [x,y] : result){
        cout << x << " " << y << endl;
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
