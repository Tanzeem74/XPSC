#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s,s1; cin >> s >> s1;
    char a=s.back();
    char b=s1.back();
    if(a==b){
        if(s.size()==s1.size()) cout << "=" << endl;
        else if(a=='S'){
            if(s.size()<s1.size()) cout << ">" << endl;
            else cout << "<" << endl;
        }
        else if(a=='L'){
            if(s.size()>s1.size()) cout << ">" << endl;
            else cout << "<" << endl;
        }
    }
    else{
        if(a<b) cout << ">" << endl;
        else cout << "<" << endl;
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
