
/******************************************************************************
kth largest using priority queue
                              tc - n log k
0(1) for accesing the top for kth largest 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kthLargest(vector<int>& arr, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for( auto num : arr){
        pq.push(num);
        
        if(pq.size()>k)
    {
        pq.pop();
    }
    
    }
    return pq.top();
    

}


int main()
{
vector<int> arr={1,4, 3, 5, 6,2};
   int k=3;
   int c= kthLargest(arr,k);
   cout<<"the kth "<< c ;
   
    return 0;
    
}
