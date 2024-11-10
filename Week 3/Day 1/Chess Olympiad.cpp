#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    double x,y,z; cin >> x >> y >> z;
    double rem=4-(x+y+z);
    double myTeam=x+0.5*y;
    double opponent=z+0.5*y;
    if((myTeam+rem)>opponent) cout << "YES" << endl;
    else cout<< "NO" << endl;
}
