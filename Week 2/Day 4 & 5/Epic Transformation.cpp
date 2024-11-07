#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }
    priority_queue<int>pq;
    for(auto [x,y] : mp) pq.push(y);
    while(!pq.empty()){
        if(pq.size()<2) break;
        int a,b;
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        a--;
        b--;
        if(a>0) pq.push(a);
        if(b>0) pq.push(b);
    }
    int result=0;
    while(!pq.empty()){
        int top=pq.top();
        result+=top;
        pq.pop();
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