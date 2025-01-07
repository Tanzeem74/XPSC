#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(is_sorted(v.begin(),v.end())){
            cout << "yes" << endl;
        }
        else{
            int back=0;
            vector<int>nv;
            for(int i=0;i<n;i++){
                int f=v[i]/10,l=v[i]%10;
                if(f>=back && l>=f){
                    back=l;
                    nv.push_back(f);
                    nv.push_back(l);
                }
                else{
                    nv.push_back(v[i]);
                    back=v[i];
                }
            }
            if(is_sorted(nv.begin(),nv.end())){
                cout << "yes" << endl;
            }
            else{
                cout << "no" << endl;
            }
        }
    }
}