//min max game
brute force 
tc & sc =O(n)
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=log2(nums.size());
        vector<int> ans=nums;
        while(n>0){
            int flag=0;
            vector <int> temp;
            for(int i=0;i<ans.size();i=i+2){
                if(flag==0){
                    temp.push_back(min(ans[i],ans[i+1]));
                    flag=1;
                }
                else if(flag==1){
                    temp.push_back(max(ans[i],ans[i+1]));
                    flag=0;
                }
            }
            ans=temp;
            n--;

        }
        return ans[0];
    }
};
optimal O(n), sc=O(1)
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while (n > 1) {
            for (int i = 0; i < n / 2; i++) {
                if (i % 2 == 0) {
                    nums[i] = min(nums[2 * i], nums[2 * i + 1]);
                } else {
                    nums[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            n /= 2; // Reduce the size of the array being considered
        }
        return nums[0];
    }
};
