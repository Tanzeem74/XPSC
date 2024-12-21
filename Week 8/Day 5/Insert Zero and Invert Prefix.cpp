#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){

    int n; cin >> n;
    vector<int>v(n);
    for(int i=n-1;i>=0;i--){
        cin >> v[i];
    }
    if(*v.begin()==1){
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
    vector<int>res;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            res.push_back(v[i]);
        }
        else{
            int cnt=0,t;
            while(v[i]!=0 && i<n){
                cnt++;
                i++;
            }
            t=cnt-1;
            while(t--){
                res.push_back(0);
            }
            res.push_back(cnt);
            i--;
        }
    }
    for(auto i : res){
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
