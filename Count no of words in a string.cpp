//count words in a string
#include<bits/stdc++.h>
using namespace std;
int countwords(const string& text){
    int wcount=0;
    bool inword=false;
    for(auto i:text){
        if(!isspace(i)){
            if(!inword){
                wcount++;
                inword=true;
            }
        }
        else{
        inword=false;
        }
        
    }
    return wcount;
}
int main(){
    string text;
    cout<<"text";
    getline(cin,text);
    int c=countwords(text);
    cout<<c;
    return 0;
}
