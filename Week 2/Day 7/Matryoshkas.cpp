#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    //vector<int>v(n);
    map<int,int>mp;
    multiset<int>s;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
        s.insert(x);
    }
    int result=0;
    for(auto val : s){
        if(mp[val]>0){
            result++;
            while(mp[val]>0){
                mp[val]--;
                val++;
            }
        }
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}