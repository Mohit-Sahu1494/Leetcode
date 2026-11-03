class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int maximum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            maximum=max(nums[i],maximum);
        }
        for(int i=0;i<nums.size();i++){
             count+=maximum-nums[i];
        }
        return count;
    }
};