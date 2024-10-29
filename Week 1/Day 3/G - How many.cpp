#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int s,t; cin >> s >> t;
    int cnt=0;
    for(int i=0;i<=s;i++){
        for(int j=0;i+j<=s;j++){
            for(int k=0;i+j+k<=s;k++){
                if(i*j*k<=t) cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}