#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int i=0,j=0,cnt=n,w=0;
    while(j<n){
        if(s[j]=='W')
            w++;
        if(j-i+1==k){
            cnt=min(cnt,w);
            if(s[i]=='W')
                w--;
            i++;
        }
        j++;
    }
    cout << cnt << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}
