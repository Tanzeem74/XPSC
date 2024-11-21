class Solution{
  public:
    int longestKSubstr(string s, int k) {
        // your code here
        int i=0,j=0,result=-1;
        map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==k){
                result=max(result,j-i+1);
            }
            else{
                while(mp.size()>k && i<=j){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return result;
    }
};