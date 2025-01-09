//binary search iterative 


#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int n, int target){
    int left=0;
    int right= n-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(target==mid)
        {
            return mid;
        }
        if(target > mid){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int n , target;
    vector<int> arr={2,3,4,5,6,7,9};
    n= arr.size();
    target=5;
    int result=binarysearch(arr,n,target);
    if(result != -1){
        cout<<result;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}



//binary search using recursion


#include<bits/stdc++.h>
using namespace std;
int binaryrecursive(vector<int> arr, int left, int right, int target){
    if(left>right){
        return -1;
    }
    int mid=left+(right-left)/2;
    if(target==mid){
        return mid;
    }
    if(target>mid){
        binaryrecursive(arr,mid+1, right, target);
    }
    if(target<mid){
        binaryrecursive(arr, left, mid-1, target);
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int left=0;
    int right=arr.size();
    int target=5;
    int c= binaryrecursive(arr,left,right,target);
    cout<<c<<endl;
    return 0;
    
}
