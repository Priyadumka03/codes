Second largest and second smallest in an array 
brute= sort the array and return n-2 index , if duplicates exist then check if the largest or second largest are same or not. tc=O(nlogn +n )
better= there are two passes in this approach first find largest in 1st pass and in second pass check if largest and slargest are same along with if the current element is greAter than second largest, update slargest.
tc=O(2n)
optimal=use a single pass to check largest and second largest simultaneously. 
tc=O(n)





#include <bits/stdc++.h>
using namespace std;
int sLargest(vector<int>&arr,int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;

    
    
}
int sSmallest(vector<int>&arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;

    
    
}



int main()
{
    vector<int> arr={1,2,3,6,7};
    int n=arr.size();
    int l=sLargest(arr,n);
    int s=sSmallest(arr,n);
    
    cout<<l<<' '<<s;

    return 0;
}
