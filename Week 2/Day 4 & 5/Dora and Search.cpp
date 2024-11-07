#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    vector<int>v(n);
    set<int>s;
    for(int i=0;i<n;i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    int left=0,right=n-1;
    while(left<right){
        auto mn=*s.begin();
        auto mx=*s.rbegin();
        if(v[left]==mn || v[left]==mx){
            auto ptr=s.find(v[left]);
            s.erase(ptr);
            left++;;
        }
        else if(v[right]==mn || v[right]==mx){
            auto ptr=s.find(v[right]);
            s.erase(ptr);
            right--;
        }
        else{
            cout << left+1 << " " << right+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
