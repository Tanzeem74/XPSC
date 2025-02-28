#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n,m; cin >> n >> m;
    vector<int>a(n),b(n);
    a[0]=1;
    for(int i=1;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,ans=n;
    while(i<n){
        while(j<n){
            if(a[i]<b[j]){
                ans--;
                j++;
                break;
            }
            j++;
        }
        i++;
    }
    cout << ans << endl;
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}