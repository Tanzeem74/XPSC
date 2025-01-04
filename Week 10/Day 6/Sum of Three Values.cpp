#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >>v[i];
        }
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({v[i],i+1});
        }
        sort(vp.begin(),vp.end());
        int ok=0;
        for(int i=0;i<n;i++){
            int tar=k-vp[i].first;
            int l=i+1,r=n-1;
            while(l<r){
                int cur=vp[l].first+vp[r].first;
                if(cur==tar){
                    cout << vp[i].second << " ";
                    cout << vp[l].second << " ";
                    cout << vp[r].second << endl;
                    ok=1;
                    break;
                }
                else if(cur<tar){
                    l++;
                }
                else{
                    r--;
                }
                /*if(ok==1){
                    break;
                }*/
            }
            if(ok==1){
                break;
            }
        }
        if(ok==0){
            cout << "IMPOSSIBLE" << endl;
        }

    }
}