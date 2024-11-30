#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
string s;
bool check(){
    int n=2*s.size();
    for(int i=0;i<n;i++){
        if(s[i]==')' && s[i+1]=='('){
            return true;
        }
    }
    return false;

}
void solution(){
    cin >> s;
    if(s=="()"){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    string r="",r2="";
    for(int i=0;i<s.size();i++){
        r+='(';
        r2+="()";
    }
    for(int i=0;i<s.size();i++){
        r+=')';
    }
    if(check()){
        cout << r << endl;
    }
    else{
        cout << r2 << endl;
    }
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}