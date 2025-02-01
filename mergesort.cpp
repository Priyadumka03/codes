/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> & nums,int low, int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
}
void mergesort(vector<int>  & nums, int low, int high ){
    if(low==high) return;
    int mid=low+(high-low)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
}

int main()
{   vector<int>nums={1,4,32,5,6,77,8};
    int n=nums.size();
    mergesort(nums,0,n-1);
    for(auto & it:nums){
        cout<<it<<endl;
    }

    return 0;
}
