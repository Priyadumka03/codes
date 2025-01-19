#include <bits/stdc++.h>   //tc=O(n) sc=O(n)
using namespace std;

void solverec(stack<int>& st,int k){
    if(k==0){
        st.pop();
        return ;
    }
    int temp=st.top();
    st.pop();
    solverec(st,k-1);
    st.push(temp);
    return;
}
stack<int> deletemid(stack<int>& st,int size){
    
    if(st.empty()){
        return st;
    }
    int k=(size)/2;  //0-based mid index , if want 1-based then (size+1)/2 and update k==1 in the solve func
    solverec(st,k);
    return st;
}


int main()
{
   vector<int> arr={1,2,3,4,5};
   stack <int> st;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
   int size=st.size();
   stack<int> res=deletemid(st,size);
   while(!res.empty()){
       cout<<res.top()<<endl;
       res.pop();
   }

    return 0;
}
