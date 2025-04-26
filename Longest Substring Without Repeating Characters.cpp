tc=O(n)
  sc= O(256)


class Solution {


public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>h;
        int l=0, maxLen=0;
        for(int r=0;r<n;++r){
            char c=s[r];
            if((h.find(c)!=h.end()) && (h[c]>=l)){
                
                    l=h[c]+1;
                
            }
                int len=r-l+1;
                maxLen=max(len,maxLen);
                h[c]=r;
                

            
        }
        return maxLen;
        
    }
};
