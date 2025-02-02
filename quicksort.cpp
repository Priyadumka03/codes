/******************************************************************************
tc=O(nlogn)
sc=O(1)
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> & nums,int low,int high){
    int pivot=nums[low];
    int left=low;
    int right=high;
    
    while(left<right){
    while(nums[left]<=pivot && left<=high-1){
       
            left++;
        }
        while(nums[right]>pivot && right>=low+1){
       
            right--;
        }
        if(left<right) swap(nums[left],nums[right]);
        
    }
    swap(nums[low],nums[right]);
     return right;
    }
   

void quicksort1(vector<int>  & nums, int low, int high ){
    if(low<high) {
    int pindx=partition(nums,low,high);
    quicksort1(nums,low,pindx-1);
    quicksort1(nums,pindx+1,high);
    }
}
 vector<int> quicksort(vector<int> & nums){
        quicksort1(nums,0,nums.size()-1);
       return nums;
    
        
    }


int main()
{   vector<int>nums={1,4,32,5,6,77,8};
    
    quicksort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    

    return 0;
}
