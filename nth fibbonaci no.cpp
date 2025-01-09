//nth fibbonaci no
tc=O(n) for loop from 0 to n-1
sc=O(1)
#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0, b=1;
    for(int i=0;i<n;i++)
    {
        int t=a;
        a=b;
        b= t+b;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int c=fibonacci(n);
    cout<<" fib"<<c;
    return 0;
}
