#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
string s;
bool cmp(pair<char,int> x, pair<char,int> y){
    return x.second<y.second;
}
bool cmp2(pair<char,int> x, pair<char,int> y){
    if(s[0]>s[s.size()-1])
        return x.first>y.first;
    else
        return x.first<y.first;
}
void solution(){
    cin >> s;
    vector<pair<char,int>>v;
    char mx=max(s[0],s[s.size()-1]),mn=min(s[0],s[s.size()-1]);
    for(int i=0;i<s.size();i++){
        if(s[i]>=mn && s[i]<=mx){
            v.push_back({s[i],i});
        }
    }
    sort(v.begin(),v.end(),cmp);
    if(v.size()>2){
        sort(v.begin()+1,v.begin()+v.size()-1,cmp2);
    }
    vector<int>ind;
    int ans=0;
    ind.push_back(1);
    for(int i=1;i<v.size();i++){
        ans+=abs(v[i-1].first-v[i].first);
        ind.push_back(v[i].second+1);
    }
    cout << ans << " " << ind.size() << endl;
    //cout << 1 << " ";
    for(auto x:ind) cout << x << " " ;
    cout << endl;    
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}