#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    multiset<int>s;
    for(int i=0;i<n;i++){
        int x; cin >> x ;
        s.insert(x);
    }
    //cout << s.size() << endl;
    int res=0,problem=1;
    while(!s.empty()){
        auto lb=s.lower_bound(problem);
        if(lb!=s.end()){
            res++;
            s.erase(lb);
        }
        else
            break;
        problem++;
    }
    cout << res << endl;
}
int main()
{
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}