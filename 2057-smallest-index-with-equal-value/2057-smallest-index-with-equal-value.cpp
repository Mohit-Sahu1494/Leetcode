class Solution {
public:
    int smallestEqual(vector<int>& nums) {
         for(int i=0;i<nums.size();i++){
          int val=i%10;
          if(val==nums[i]){
            return i;
          }
      }
      return -1;
    }
};