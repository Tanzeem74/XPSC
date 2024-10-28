#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s; cin >> s;
    vector<bool> chck(26,false);
    for(char c : s) chck[c-'a']=true;
    for (int i=0;i<26;i++){
        if (!chck[i]){
            char ch='a'+i;
            string s1;
            s1.push_back(ch);
            cout << s1 << endl;
            return;
        }
    }
    cout << "None" << endl;
}

int main() {
    faster
    int t = 1; //cin >> t;
    while (t--)
        solution();
}