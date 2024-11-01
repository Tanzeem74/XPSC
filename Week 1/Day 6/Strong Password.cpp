#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    string s; cin >> s;
    int found=0;
    for(int i=0;i<s.size()-1;i++){
        cout << s[i];
        if(s[i]==s[i+1] && found==0){
            if(s[i]!='z'){
                char c=s[i]+1;
                cout << c;
            }
            else
                cout <<'a';
            found=1;
        }
    }
    if(found==1)
        cout << s.back() << endl;
    else if(found==0 && s.back()!='z'){
        char c=s.back()+1;
        cout << s.back() << c << endl;
    }
    else
        cout << s.back() << 'a' << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}