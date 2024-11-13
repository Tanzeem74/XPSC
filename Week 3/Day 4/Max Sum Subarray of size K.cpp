class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int i=0,j=0;
        long long result=0,sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1==k){
                result=max(result,sum);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return result;
    }
};