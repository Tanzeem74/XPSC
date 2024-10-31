#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;
void solution() {
    string s; cin >> s;
    vector<int> sml,cap;
    for(int i=0;i<s.size();i++) {
        if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            cap.push_back(i);
        
        if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            sml.push_back(i);
        if(s[i]=='B' && !cap.empty()){
            s[cap.back()]='.';
            cap.pop_back();
        }
        if(s[i]=='b' && !sml.empty()){
            s[sml.back()] = '.';
            sml.pop_back();
        }
    }

    for(auto c:s){
        if(c!='B' && c!='b' && c!= '.') 
            cout << c;
    }
    cout << endl;
}

int main() {
    faster
    int t; cin >> t;
    while (t--) {
        solution();
    }
}
