class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int i=0,j=0;
        vector<int>v;
        queue<int>q;
        while(j<arr.size()){
            if(arr[j]<0) q.push(arr[j]);
            if(j-i+1==k){
                if(!q.empty()){
                    v.push_back(q.front());
                    if(arr[i]==q.front()) q.pop();
                }
                else v.push_back(0);
                i++;j++;
            }
            else j++;
        }
        return v;
    }
};