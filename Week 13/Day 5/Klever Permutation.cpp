#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int>ans(n);
        int l=1,r=n;
        for(int i=0;i<n;i++){
            if(ans[i]!=0){
                break;
            }
            else if(i%2==0){
                for(int j=i;j<n;j+=k){
                    ans[j]=l;
                    l++;
                }
            }
            else{
                for(int j=i;j<n;j+=k){
                    ans[j]=r;
                    r--;
                }
            }
        }
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}