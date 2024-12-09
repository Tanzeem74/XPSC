#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    if(s1==s2 || s1[0]=='1'){
        cout << "yes" << endl;
        return;
    }
    int idx=-1;
    for(int i=0;i<n;i++){
        if(s1[i]=='1'){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout << "no" << endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(i<idx){
                cout << "no" << endl;
                return;
            }
        }
    }
    cout << "yes" << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
