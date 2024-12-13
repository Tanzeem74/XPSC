#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int ok=0, notOK=0;
    int l=0,r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            notOK++;
        }
        else{
            ok+=2;
        }
        l++;
        r--;
    }
    vector<int>v;
    //cout << ok << " " << notOK << endl;
    for(int i=0;i<=n;i++){
        int tot=i;
        tot=tot-notOK;
        if(tot<0){
            v.push_back(0);
        }
        else{
            int rem=tot%2;
            tot=max(rem,tot-ok);
            tot=max(0,tot-(n%2));

            if(tot==0)
                v.push_back(1);
            else
                v.push_back(0);
        }
    }
    for(auto i:v){
        cout <<i;
    }
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
