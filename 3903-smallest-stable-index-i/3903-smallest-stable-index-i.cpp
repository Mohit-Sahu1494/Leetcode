class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       vector<int> prefixMax(nums.size());
       vector<int> suffix(nums.size());
       int n=nums.size();

       prefixMax[0]=nums[0];
       suffix[n-1]=nums[n-1];

       for(int i=1;i<n;i++){
        prefixMax[i]=max(nums[i],prefixMax[i-1]);
       }

       for(int i=n-2;i>=0;i--){
        suffix[i]=min(suffix[i+1],nums[i]);
       }

        for(int i=0;i<nums.size();i++){
            if(prefixMax[i]-suffix[i]<=k){
                return i;
            }
        }
       return -1;
    }
};