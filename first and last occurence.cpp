tc=O(log n)
sc=O(1)


class Solution {
public:
    int firstocc(vector<int>& nums, int target,bool searchleft){
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                if(searchleft)
                high=mid-1;
                else
                low=mid+1;

            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    int lastocc(vector<int>& nums, int target, bool searchleft){
        int low=0;
        int high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                if(searchleft)
                high=mid-1;
                else
                low=mid+1;

            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstocc(nums,target,true);
        if(first==-1) return{-1,-1};
        int last=lastocc(nums,target,false);

        return {first,last};

        
    }
};
