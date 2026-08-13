class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i=0;
        vector<int>ans;
        while(i<nums.size()){
            int freq=nums[i++];
            int val=nums[i++];
            for(int i=1;i<=freq;i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};