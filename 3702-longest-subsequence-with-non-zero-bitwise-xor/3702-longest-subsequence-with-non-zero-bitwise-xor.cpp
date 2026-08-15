class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
      int ans=0;
      for(int i=0;i<nums.size();i++){
        ans^=nums[i];
      }
      if(ans!=0){
        return nums.size();
      }
      for(int num:nums){
        if(num!=0){
            return nums.size()-1;
        }
      }
      return 0;
    }
};