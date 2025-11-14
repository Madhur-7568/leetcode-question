#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int a=1;
        int b=2;
        int c=0;
        for(int i=3;i<=n;i++){
         c=a+b;
        a=b;
        b=c;
        }
        return c;
    }
};
    int main(){
        Solution s1;
      cout<< s1. climbStairs(4);
        return 0;
    }
