#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        string s; cin >> s;
        set<char>st;
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='R'){
                r++;
            }
            else{
                d++;
            }
        }
        if(st.size()==1 || st.size()==0){
            cout << 0 << endl;
        }
        else{
            int mn=min(l,r);
            int mn1=min(u,d);
            if(mn && !mn1){
                cout << 2 << endl;
                cout << "LR" << endl;
            }
            else if(!mn && mn1){
                cout << 2 << endl;
                cout << "UD" << endl;
            }
            else{
                cout << 2*(mn+mn1) << endl;
                for(int i=0;i<mn;i++){
                    cout << "L";
                }
                for(int i=0;i<mn1;i++){
                    cout << "U";
                }
                for(int i=0;i<mn;i++){
                    cout << "R";
                }
                for(int i=0;i<mn1;i++){
                    cout << "D";
                }
                cout << endl;
            }
        }
    }
}