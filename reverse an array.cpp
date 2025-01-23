/******************************************************************************

                          REVERSE AN ARRAY USING 1 OR 2 VARIABLE
TC=O(n)

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void reversed(vector<int>&arr,int l,int r){
    
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reversed(arr,l+1,r-1);
    
}



int main()
{
    vector<int> arr={1,2,3,6,7};
    int n=arr.size();
    reversed(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<endl;
    }
    

    return 0;
}
//1 variable
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void reversed(int i,vector<int>&arr,int n){

    
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reversed(i+1,arr,n);
    
}



int main()
{
    vector<int> arr={1,2,3,6,7};
    int n=arr.size();
    reversed(0,arr,n);
    for(auto i:arr){
        cout<<i<<endl;
    }
    

    return 0;
}
