class Solution {
public:
    int triangularSum(vector<int>& nums) {
      
      while(nums.size()>1){
        vector<int>helper;
        for(int i=0;i<nums.size()-1;i++){
          int sum=nums[i]+nums[i+1];
            helper.push_back(sum%10);
        }

        nums=helper;
      }
      return nums[0];
    }
};