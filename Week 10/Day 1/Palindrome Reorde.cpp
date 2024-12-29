#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution() {
    string s; cin >> s; 
    map<char,int> mp;
    for(char c:s){
        mp[c]++;
    }
    int odd = 0;
    char oddC = '\0';
    for(auto [x, y] : mp){
        if(y%2!=0){
            odd++;
            oddC = x;
        }
        if(odd>1){
            cout << "NO SOLUTION" << endl;
            return;
        }
    }
    //string ans=""
    string ans(s.size(),' ');
    int l=0,r=s.size()-1;
    for(auto [x,y] : mp){
        for(int i=0;i<y/2;i++){
            ans[l]=x;
            ans[r]=x;
            l++;
            r--;
        }
    }
    if(odd==1){
        ans[l]=oddC;
    }
    cout << ans << endl;
}

int main() {
    faster
    int t = 1; // cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
