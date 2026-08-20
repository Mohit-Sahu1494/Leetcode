class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      vector<int>first;
      vector<int>second;

      first.push_back(nums[0]);
      second.push_back(nums[1]);

      for(int i=2;i<nums.size();i++){
         if(first.back()>second.back()){
             first.push_back(nums[i]);
         }
         else{
            second.push_back(nums[i]);
         }
      }
      vector<int>ans;

      for(int x:first){
        ans.push_back(x);
      }
      for(int x:second){
        ans.push_back(x);
      }
      return ans;
    }

};