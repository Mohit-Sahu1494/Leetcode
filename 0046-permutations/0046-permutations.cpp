class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n= nums.size();
        int fact=1;
        for(int i =1;i<=n;i++){
         fact*=i;
        }
        int idx=0;
     vector<vector<int>> ans;
        while(fact>=1){
             int i=n-2;
             while(i>=0 && nums[i]>=nums[i+1]){
                i--;
             }
             if(i>=0){
                int j=n-1;
                while(j>=0 && nums[j]<=nums[i]){
                    j--;
                }
                swap(nums[i], nums[j]);
             }         
            reverse(nums.begin()+i+1,nums.end());
            ans.push_back(nums);
            fact--;
        }
         return ans;
    }
};