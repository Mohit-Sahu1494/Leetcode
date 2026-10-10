class Solution {
public:
    void helper(vector<int>&nums,vector<int>&db,int index,int& res){
    int result=0;
    for(int x:db){
        result^=x;
    }
    res+=result;
     if(index==nums.size()) return ;
     for(int i=index; i<nums.size();i++){
            db.push_back(nums[i]);
            helper(nums,db,i+1,res);
            db.pop_back();
     }
   }

    int subsetXORSum(vector<int>& nums) {
        vector<int>db;
        int res=0;
         helper(nums,db,0,res);
        return res;
    }
};