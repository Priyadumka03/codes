//rotate an array left or right by k steps
//tc=O(d)+O(n-d)+O(n)= O(2n)
//sc=O(1)



class Solution {
public:
/*void Rev(vector<int>& nums,int left, int right){
    while(left<=right){
        int temp=nums[left]; //left rotate
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;

    }
}

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        Rev(nums,0,k-1);
        Rev(nums,k,n-1);
        Rev(nums,0,n-1);
        
    }
    */
    void Rev(vector<int>& nums,int left, int right){
    while(left<=right){
        int temp=nums[left]; //right rotate
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;

    }
}

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        Rev(nums,0,n-1);
        Rev(nums,0,k-1);
        Rev(nums,k,n-1);
        
    }
};
