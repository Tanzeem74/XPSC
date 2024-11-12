#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    string s; cin >> s;
    int left=0,right=n-1;
    int result=n;
    while(left<=right){
        if(s[left]!=s[right]){
            result-=2;
            left++;
            right--;
        }
        else break;
    }
    cout << result << endl;
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
