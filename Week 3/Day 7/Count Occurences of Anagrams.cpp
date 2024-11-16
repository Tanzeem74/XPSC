class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char, int> mp1,mp2;
	    int n=txt.size(),k=pat.size();
	    int res=0;
	    for(char c :pat) mp1[c]++;
	    int i=0,j=0;
	    while(j<n) {
	        mp2[txt[j]]++;
	        if(j-i+1<k) j++;
	        else if(j-i+1==k){
	            if(mp1==mp2) res++;
	            mp2[txt[i]]--;
	            if(mp2[txt[i]]==0) mp2.erase(txt[i]);
	            i++;j++;
	        }
	    }
	    return res;
	}

};