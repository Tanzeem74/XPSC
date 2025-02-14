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
        string s; cin >> s;
        int b=0;
        for(auto c:s){
            if(c=='B'){
                b++;
            }
        }
        if(b==k){
            cout << 0 << endl;
        }
        else if(b<k){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='A'){
                    cnt++;
                }
                if(cnt+b==k){
                    cout << 1 << endl;
                    cout << i+1 << " " << "B" << endl;
                    break;
                }
            }
        }
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='B'){
                    cnt++;
                }
                if(cnt+k==b){
                    cout << 1 << endl;
                    cout << i+1 << " " << "A" << endl;
                    break;
                }
            }
        }
    }
}