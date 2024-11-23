#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int m=(n*(n-1))/2;
    vector<int>b(m);
    map<int,int>mp;
    for(int i=0;i<m;i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    sort(b.begin(),b.end());
    int i=0,j=n-1;
    while(i<m){
        cout << b[i] << " ";
        if(j+1>=0){
            i+=j;
            j--;
        }
        else
            break;
    }
    cout << b[m-1];
    cout << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
