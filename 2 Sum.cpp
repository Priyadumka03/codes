//2 sum
//optimal
//tc= n logn
//using brute force it's O(n^2) with two loops and using hashmap we can reduce it to O(n logn ), find takes O(n) in best case and sc=O(n) hashmap
//slightly better approach if we dont have to return the indexes but only yes or no is using 2 pointer approach , 
//where first we'll store the numbers with indexes in a data structure and then sort the array and keep the pointers 
//in either side if the target is larger move froward the left pointer and if smaller then decrement the right pointer and once the pointers cross each other and didn't find the no its a NO :)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;
       for(int i=0;i<nums.size();i++){
        int a=nums[i];
        int more=target-a;
        if(mp.find(more)!=mp.end()){
            return {mp[more],i};
        }
        mp[a]=i;
       }
       return {};
        
       }

};
