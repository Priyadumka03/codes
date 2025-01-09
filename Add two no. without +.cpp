//bit manipulation (add two no without using + operator)
//can use ++ or -- operator 
//O(max bit)
//using xor,&,<< operator
//first add no using xor operation and check if carry is generated using & operator and left shift them to again xor with original no. and do this until the carry is 0.
class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int temp=(a & b)<< 1;
            a=a^b;
            b=temp;
        }
        return a;
        
    }
};
