class Solution {
public:
   void helper(TreeNode *root,int sum,vector<vector<int>>&ans,vector<int>&arr){
     if(root==nullptr) return ;
     if(root->left==nullptr && root->right==nullptr){
         arr.push_back(root->val);
         if(sum==root->val){
              vector<int>a;
              for(int i=0;i<arr.size();i++){
                a.push_back(arr[i]);
              }
              ans.push_back(a);
         }
         arr.pop_back();
     }
       arr.push_back(root->val);
      helper(root->left,sum-root->val,ans,arr);
      helper(root->right,sum-root->val,ans,arr);
      arr.pop_back();
      
   }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector<vector<int>>ans;
      vector<int>arr;
       helper(root,targetSum,ans,arr);
      return ans;    
    }
};