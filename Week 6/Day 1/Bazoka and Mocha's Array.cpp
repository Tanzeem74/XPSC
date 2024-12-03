#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
void solution(){
    int n; cin >> n;
    int arr[2*n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++){
        arr[i+n]=arr[i];
    }
    //for(auto val :arr){
    //    cout << val << " ";
    //}
    //cout << endl;
    for(int i=0;i<n;i++){
        if(is_sorted(arr+i,arr+i+n)){
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
}
int main()
{
    faster
    int t=1; cin >> t;
    while (t--)
        solution();
}