class Solution {
public:
    void helper(vector<int>&nums,vector<int>&db,vector<vector<int>>&ans,int index){
        ans.push_back(db);
        if(index==nums.size()) return ;
        for(int i=index;i<nums.size();i++){
             db.push_back(nums[i]);
             helper(nums,db,ans,i+1);
             db.pop_back();
        }
    }
     
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>db;
        vector<vector<int>>ans;
          helper(nums,db,ans,0);
       return ans;
    }

};