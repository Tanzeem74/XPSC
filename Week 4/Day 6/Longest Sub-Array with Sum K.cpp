class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int i=0,j=0;
        int sum=0,result=0;
        map<int,int>mp;
        while(j<arr.size()){
            sum+=arr[j];
            int rem=sum-k;
            if(sum==k){
                result=max(result,j+1);
            }
            if(mp.find(rem)!=mp.end()){
                result=max(result,j-mp[rem]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=j;
            }
            j++;
        }
        return result;
    }
};