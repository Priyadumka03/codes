//leaders in an array
//brute force has two loops and a flag which turns false if the no is not a leader. tc=O(n^2)
// Online C++ compiler to run C++ program online
//Optimal tc=O(n log n ) for sorting and O(n) for traversal sc=O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int>leaders(vector<int>& nums){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi=max(maxi,nums[i]);
    }
    sort(ans.begin(),ans.end()); // can use reverse O(n) 
    return ans;
}

int main() {
    vector<int> nums={1,12,11,1,3,6};
    vector<int> c=leaders(nums); 
    
    for(auto& i:c){
        cout<<i<<endl;
    }
    

    return 0;
}
