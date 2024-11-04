#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s,s1; cin >> s >> s1;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            if(s1[i]!='R'){
                cout << "NO" << endl;
                return;
            }
        }
        else{
            if(s1[i]=='R'){
                cout << "NO" << endl;
                return;
            }
        }
   }
   cout << "YES" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}