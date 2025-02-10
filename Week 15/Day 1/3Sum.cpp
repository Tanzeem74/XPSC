#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main(){

    faster
    int t=1; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int>mp;
        int ans=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            int x=v[i]%10;
            mp[x]++;
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    int a=-1,b=-1,c=-1;
                    if(mp[i]!=0){
                        a=1;
                        mp[i]--;
                    }
                    if(mp[j]!=0){
                        b=1;
                        mp[j]--;
                    }
                    if(mp[k]!=0){
                        c=1;
                        mp[k]--;
                    }
                    if(a==1 && b==1 && c==1){
                        int s=i+j+k;
                        if(s%10==3){
                            ans=1;
                            break;
                        }
                    }
                    if(a==1){
                        mp[i]++;
                    }
                    if(b==1){
                        mp[j]++;
                    }
                    if(c==1){
                        mp[k]++;
                    }
                }
            }
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}