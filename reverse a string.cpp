//reverse a string using two pointers
// O(n)
#include <bits/stdc++.h>
using namespace std;
string reversed(string& s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    return s;
}

int main() {
    string s;
    cout<<"string"<<endl;
    getline(cin,s);
    
    string c=reversed(s);
    cout<<c<<endl;
    
    return 0;
}
//recursive
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void reversed(string& s,int left, int right){
   
    while(left>=right){ 
        return;
    }
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        reversed(s,left+1,right-1);
    
    
}

int main() {
    string s;
    cout<<"string"<<endl;
    getline(cin,s);
     int left=0;
    int right=s.size()-1;
    
    reversed(s,left,right);
    cout<<s<<endl;
    
    return 0;
}
