class Solution {
public:
    /*void moveZeroes(vector<int>& nums) {
        vector<int> temp;   //brute force tc=O(2n), sc=O(n)
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++){
            nums[i]=0;
        }
    }*/
    void moveZeroes(vector<int>& nums) {
        int j=-1; //tc=O(n),sc=(1)
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
           
        }
        
    }

};
