#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    map<int,int>mp;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
        if(mp[v[i]]==k)
            vec.push_back(v[i]);
    }
    sort(vec.begin(),vec.end());
    int i=0, ans=-1, l, r;
    while(i<vec.size()){
        int j=i;
        while((j+1)<vec.size() && (vec[j+1]-1)==vec[j])
            j++;
        if((j-i+1)>ans){
            ans=(j-i+1);
            l=vec[i], r=vec[j];
        }
        i=j+1;
    }
    if(ans==-1)
        cout << ans << endl;
    else
        cout << l << " " << r << endl;

}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
