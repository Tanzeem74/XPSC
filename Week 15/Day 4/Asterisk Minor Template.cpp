#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;
        int ok=0;
        if(a[0]==b[0]){
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            ok=1;
        }
        else if(a[a.size()-1]==b[b.size()-1]){
            cout << "YES" << endl;
            cout << "*" << a[a.size()-1] << endl;
            ok=1;
        }
        else{
            for(int i=0;i<a.size();i++){
                for(int j=0;j<b.size();j++){
                    if(a[i]==b[j] && a[i+1]==b[j+1]){
                        cout << "YES" << endl;
                        cout << "*" << a[i] << a[i+1] << "*" << endl;
                        ok=1;
                        break;
                    }
                }
                if(ok==1){
                    break;
                }
            }
        }
        if(ok==0){
            cout << "NO" << endl;
        }
    }
}