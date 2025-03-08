#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n; cin >> n;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    set<int> s[n+1];
    for (int i=1; i<=n;i++){
        s[i].insert(i);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(str[i][j]=='1')
                s[j+1].insert(i+1);
        }
    }
    for(int i=1;i<=n;i++){
        cout << s[i].size() << " ";
        for (auto j:s[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}