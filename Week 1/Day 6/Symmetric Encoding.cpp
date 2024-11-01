#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    string s1=s;
    sort(s1.begin(),s1.end());
    vector<char> unq;
    for(int i=0;i<s1.size();i++){
        if(i==0 || s1[i]!=s1[i-1]){
            char c=s1[i];
            unq.push_back(s1[i]);
        }
    }
    //for(int i=0;i<unq.size();i++)
        //cout << unq[i];
    //cout << unq[0] << " " unq[6];
    map<char,char>mp;
    int j=unq.size()-1;
    for(int i=0;i<unq.size();i++){
        mp[unq[i]]=unq[j];
        j--;
    }
    for(int i=0;i<s.size();i++)
        cout << mp[s[i]];
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
