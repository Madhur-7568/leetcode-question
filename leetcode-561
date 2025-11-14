#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      int n=nums.size();
   // int n=4;
        sort(nums.begin(),nums.end());
        int max=0;
        for(int i=0;i<n;i=i+2){
                    max=min(nums[i],nums[i+1])+max;
        }
             return max;
    }
};
    int main(){
        Solution s1;
        vector<int>nums={1,4,3,2};
     cout<<  s1. arrayPairSum(nums);
        return 0;
    }
