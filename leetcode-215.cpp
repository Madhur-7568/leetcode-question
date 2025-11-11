#include<iostream>
 #include<cmath>
 #include<vector>
 #include<algorithm>
 using namespace std;
 class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-k];
    }
};
int main(){
    Solution s1;
     vector<int>nums={3,2,1,5,6,4};
     cout<< s1.  findKthLargest( nums, 2);
    return 0;
}