#include<iostream>
 #include<cmath>
 #include<vector>
 #include<algorithm>
 using namespace std;
class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }return false;
    }
};
int main(){
    Solution s1;
    vector<int>nums={1,2,2,4};
    cout<<"result="<<s1.containsDuplicate(nums)<<endl;
    return 0;
}
