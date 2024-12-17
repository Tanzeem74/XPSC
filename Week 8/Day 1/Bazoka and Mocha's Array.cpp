#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int arr[2*n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        arr[i+n]=arr[i];
    }
    bool ok=false;
    for(int i=0;i<n;i++){
        if(is_sorted(arr+i,arr+i+n)){
            ok=true;
            break;
        }
    }
    if(ok){
        cout <<"yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}
int main()
{
    faster
    int t = 1; cin >> t;
    while (t--)
        solution();
}
