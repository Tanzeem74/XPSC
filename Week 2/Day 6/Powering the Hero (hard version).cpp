#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    priority_queue<int>pq;
    ll result=0;
    for(auto val : v){
        if(val>0) pq.push(val);
        else if(!pq.empty()){
            int top=pq.top();
            result+=top;
            pq.pop();
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
