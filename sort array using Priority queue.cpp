// sorting array using priority queue
//TC = O(n log n) inserting n elements in priority queue 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int>& arr){
    priority_queue<int, vector<int>, greater<int>> pq;
    for( auto num : arr){
        pq.push(num);
    }
int i=0;
while(!pq.empty()){
    arr[i++]=pq.top();
    pq.pop();
}
return arr;
}


int main()
{
    vector<int> arr={1,4, 3, 5, 6,2};
    for(int i:arr){
        cout<<i<<endl;
    }
    sort(arr);
    for(int i:arr){
        cout<<i;
    }
    
}
