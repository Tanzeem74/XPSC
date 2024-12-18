#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s; cin >> s;
    if(s.size()==1){
        cout << 1 << endl;
        return;
    }
    int zero=0,one=0;
    int sz=s.size();
    for(auto c : s){
        if(c=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    for(auto c:s){
        if(c=='0'){
            if(one>0){
                one--;
                sz--;
            }
            else{
                break;
            }
        }
        else if(c=='1'){
            if(zero>0){
                zero--;
                sz--;
            }
            else{
                break;
            }
        }
    }
    cout << sz << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
