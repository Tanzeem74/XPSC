#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string str; cin >> str;
    if(str[0]=='s'){
        str[0]='.';
    }
    if(str[n-1]=='p'){
        str[n-1]='.';
    }
    int p=0,s=0;
    for(char c : str){
        if(c=='s'){
            s=1;
        }
        if(c=='p'){
            p=1;
        }
    }
    if(p==1 && s==1){
        cout << "no" << endl;
        return;
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
