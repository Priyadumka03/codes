/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> & nums){
    for(int i=0;i<=nums.size()-1;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            
                swap(nums[j-1],nums[j]);
                j--;
            
        }
        
   
    }
}

int main()
{ vector<int>nums={1,3,6,2,4};
    insertion_sort(nums);
    for(auto & it:nums){
        cout<<it<<endl;
    }
    return 0;
}
