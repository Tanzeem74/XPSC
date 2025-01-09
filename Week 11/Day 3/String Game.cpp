#includebitsstdc++.h
#define faster ios_basesync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl 'n'
#define ll long long int
using namespace std;
int main()
{

    faster
    int t=1; cin  t;
    while(t--){
        string ss,tt; cin  ss  tt;
        int n=ss.size();
        int m=tt.size();
        vectorintv(n);
        for(int i=0;in;i++){
            cin  v[i];
            v[i]--;
        }
        bool flag=false;
        auto ok=[&](int del){
            vectorboolbad(n);
            for(int i=0;i=del;i++){
                bad[v[i]]=true;
            }
            int j=0;
            for(int i=0;in;i++){
                if(!bad[i] && ss[i]==tt[j]){
                    j++;
                }
                if(j==m){
                    flag=true;
                    return true;
                }
            }
            return false;
        };
        int l=0,r=n-1;
        int res=0,mid;
        while(l=r){
            mid=l+(r-l)2;
            if(ok(mid)){
                res=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(!flag){
            cout  0  endl;
        }
        else{
            cout  res+1  endl;
        }
    }
}