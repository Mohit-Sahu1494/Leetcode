class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
         ans[0]=1;
        for(int i=0;i<nums.size()-1;i++){
           ans[i+1]=ans[i]*nums[i];
        }
          int f=1;
          ans[ans.size()-1]=ans[ans.size()-1]*f;
        for(int i=ans.size()-2;i>=0;i--){
            f=f*nums[i+1];
            ans[i]=ans[i]*f;
        }
        return ans;
    }
};