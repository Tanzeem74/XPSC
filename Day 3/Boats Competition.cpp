#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int x=v[0]+v[1];
        int y=v[n-1]+v[n-2];
        int ans=0;
        for(int i=x;i<=y;i++){
            int tem=0,l=0,r=n-1;
            while(l<r){
                int curSum=v[l]+v[r];
                if(curSum==i){
                    tem++;
                    l++;
                    r--;
                }
                else if(curSum<i){
                    l++;
                }
                else{
                    r--;
                }
                //ans=max(ans,tem);
            }
            ans=max(ans,tem);
        }
        cout << ans << endl;
    }
}