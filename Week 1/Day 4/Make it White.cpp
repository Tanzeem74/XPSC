#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int firstB=-1,lastB=-1;
    firstB=s.find('B');
    lastB=s.rfind('B');
    cout << lastB-firstB+1 << endl;
}

int main() {
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}