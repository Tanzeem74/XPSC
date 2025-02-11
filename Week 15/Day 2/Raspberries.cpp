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
        int evenCnt=0,ans=k;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            if(x%2==0){
                evenCnt++;
            }
            if(x%k==0){
                ans=0;
            }
            ans=min(ans,k-x%k);
        }
        if(k==4){
            if(evenCnt>=2){
                ans=0;
            }
            else if(evenCnt==1){
                ans=min(ans,1);
            }
            else{
                ans=min(ans,2);
            }
        }
        cout << ans << endl;
    }
}