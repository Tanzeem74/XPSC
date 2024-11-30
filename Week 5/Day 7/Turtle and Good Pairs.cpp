#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(auto c : s){
        mp[c]++;
    }
    while(n>0){
        for(char c='a';c<='z';c++){
            if(mp[c]){
                cout << c;
                mp[c]--;
                n--;
            }
        }
    }
    cout << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}