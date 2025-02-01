/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> & nums){
    for(int i=nums.size()-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                didswap=1;
            }
        }
         if(didswap==0){
        break;
    }
   
    }
}

int main()
{ vector<int>nums={1,3,6,2,4};
    bubble_sort(nums);
    for(auto & it:nums){
        cout<<it<<endl;
    }
    return 0;
}
