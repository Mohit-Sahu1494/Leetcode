class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<int,int> res;
      int sum=0;
      int count=0;
      res[0]=1;
      for(int i=0;i<nums.size();i++){
          sum+=nums[i];

          if(res.count(sum-k)){
           count+=res[sum-k];
          }
          res[sum]++;
      }
      return count;
    }
};