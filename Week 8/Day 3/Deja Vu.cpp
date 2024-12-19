#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,q; cin>>n>>q;
    vector<int>a(n),b(q);
    for(auto &i:a){
        cin >> i;
    }
    for(auto &i:b){
        cin >> i;
    }
    set<int>s;
    for(int i=0;i<q; i++){
        if(s.count(b[i])){
            continue;
        }
        s.insert(b[i]);
        for(int j=0;j<n;j++){
            if(a[j]%(1<<b[i])==0){
                a[j]+=(1<<(b[i]-1));
            }
        }
    }
 
    for(auto i: a){
        cout<< i << " ";
    }
    cout<<endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
