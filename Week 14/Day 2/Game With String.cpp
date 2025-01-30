#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char>stk;
        stk.push(*s.begin());
        int cnt=0;
        for(int i=1;i<s.size();i++){
            if(!stk.empty() && stk.top()==s[i]){
                stk.pop();
                cnt++;
            }
            else{
                stk.push(s[i]);
            }
        }
        if(cnt&1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}