// selection sort (find minimum and swap)
O(n^2) for best, average and worst case
#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>& arr,int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    selection_sort(arr,n);
    for(auto i:arr){
        cout<<i<<endl;
    }
    return 0;
}
