#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; //cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string s[n+1];
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        int ans=0;
        string s1;
        for(int i=0;i<n;i++){
            s1=s[i];
            reverse(s1.begin(),s1.end());
            if(s1==s[i]){
                ans+=m;
                break;
            }
            else{
                s1.clear();
            }
        }
        vector<string> str, str1;
        int x=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string ss=s[j];
                reverse(ss.begin(),ss.end());
                if(ss==s[i]){
                    str.push_back(s[i]);
                    str1.push_back(s[j]);
                    x++;
                    ans+=(2*m);
                }
            }
        }
        cout << ans << endl;
        for(int i=0;i<x;i++){
            cout << str[i];
        }
        cout << s1;
        for(int i=x-1;i>=0;i--){
            cout << str1[i];
        }
        cout << endl; 
    }
}