#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    char mat[9][9];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<8;i++){
        int r=0,b=0;
        for(int j=0;j<8;j++){
            if(mat[i][j]=='R'){
                r++;
            }
            if(mat[j][i]=='B'){
                b++;
            }
        }
        if(b==8){
            cout << "B" << endl;
            return;
        }
        if(r==8){
            cout << "R" << endl;
            return;
        }
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
