//tc=O(n)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==1){
                cnt++;
                
            }
            else {
                cnt=0;
                
            }
            if(cnt>maxi){
                maxi=cnt;
            }
        }
        return maxi;
        
    }
};
