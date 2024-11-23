#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution()
{
    int n,k; cin >> n >> k;
    vector<int> v(n),h(n);
    for (int i=0;i<n;i++)
        cin >> v[i];
    for (int i=0;i<n;i++)
        cin >> h[i];
    int i=0,j=0,sum=0,ans=0;
    while(j<n){
        sum+=v[j];
        while (i<j && (h[j-1]%h[j]!=0)) {
            sum-=v[i];
            i++;
        }
        while(sum>k) {
            sum-=v[i];
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    cout << ans << endl;
}

int main()
{
    faster
    int t; cin >> t;
    while(t--)
        solution();
}
