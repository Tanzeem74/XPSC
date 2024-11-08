#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    string s; cin >> s;
    map<int,int> like,dislike;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            like[v[i]]=i;
        else
            dislike[v[i]]=i;
    }
    /*for(auto [x,y]:like){
        cout << x << " " << y << endl;
    }*/
    int x=1;
    for(auto [a,b] : dislike){
        v[b]=x++;
    }
    for(auto [a,b] : like){
        v[b]=x++;
    }
    for(auto value : v) cout << value << " ";
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
