class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        

        vector<int>prefix(nums.size());
       prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int totalSum=prefix[nums.size()-1];
          
        for(int i=0;i<nums.size();i++){
            int rightSum=totalSum-prefix[i];
            int leftSum=totalSum-rightSum-nums[i];
            if(leftSum==rightSum){
                return i;
            }
        }
    return -1;
    }
};