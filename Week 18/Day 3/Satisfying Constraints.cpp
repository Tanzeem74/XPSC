#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void wrong(){
    int n; cin >> n;
    int up=INT_MAX,down=INT_MIN;
    set<int> vec;
    while(n--){
        int a, b; cin >> a >> b;
        if(a==1){
            down=max(down, b);
        }
        else if(a==2){
            up=min(up,b);
      }
      else vec.insert(b);
    }
    int ans=up-down+1;
    bool flag=true;
    if(up<down){
        cout << 0 << endl;
        flag=false;
    }
    for(auto i : vec){
      if(i>=down && i<=up){
        ans--;
      }
    }
    if(flag){
        cout << ans << endl; 
    }
}
int main(){

    faster 
    int t=1; cin >> t;
    while(t--){
        wrong();
    }
}