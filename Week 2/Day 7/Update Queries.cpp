#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,m; cin >> n >> m;
    string s1; cin >> s1;
    set<int>s;
    for(int i=0;i<m;i++){
        int x; cin >> x;
        s.insert(x);
    }
    string s2; cin >> s2;
    sort(s2.begin(),s2.end());
    int i=0;
    for(auto x : s){
        x--;
        s1[x]=s2[i];
        i++;
    }
    cout << s1 << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
