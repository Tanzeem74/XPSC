#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    string result="";
    reverse(s.begin(),s.end());
    int i=0;
    while(i<n){
        if(s[i]=='0'){
            char cnt='a';
            int x=(s[i+2]-'0')*10+s[i+1]-'0';
            for(int j=1;j<=x-1;j++)
                cnt++;
            result+=cnt;
            i+=3;
        }
        else{
            int x=s[i]-'0';
            char cnt='a';
            for(int j=1;j<=x-1;j++)
                cnt++;
            result+=cnt;
            i++;
        }
    }
    reverse(result.begin(),result.end());
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
