#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
bool isVowel(char i){
    return (i=='a'||i=='e' || i=='i'||i=='o'||i=='u');
}
int main(){

    faster
    int t=1; //cin >> t;
    while(t--){
        string s,t; cin >> s >> t;
        if(s.size()!=t.size()){
            cout << "NO" << endl;
        }
        else{
            for(int i=0;i<s.size();i++){
                if(!isVowel(s[i]) && isVowel(t[i]) ){
                    cout << "NO" << endl;
                    //continue;
                    exit(0);
                }
                if(isVowel(s[i]) && !isVowel(t[i])){
                    cout << "NO" << endl;
                    //continue;
                    exit(0);
                }
            }
            cout << "YES" << endl;
        }
    }
}