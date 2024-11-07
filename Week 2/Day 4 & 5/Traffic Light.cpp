#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    int maxTime = -1;
    s+=s;
    for(int i=0;i<2*n;i++) {
        if(s[i]==c){
            int cnt=0;
            while(s[i]!='g' && i<2*n){
                cnt++;
                i++;
            }
            maxTime=max(maxTime,cnt);
        }
    }
    cout << maxTime << endl;
}
int main()
{
    faster;
    int t=1; cin >> t;
    while(t--)
        solution();
}