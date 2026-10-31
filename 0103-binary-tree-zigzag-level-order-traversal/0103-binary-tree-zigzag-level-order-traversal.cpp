/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int height(TreeNode *root){
        if(root==nullptr || (root->left==nullptr && root->right==nullptr)) return 0;
        return 1+max(height(root->left),height(root->right));
     }
      void nthLevel(TreeNode *root,vector<int>&arr,int level){
           if(root==nullptr) return;
           if(level==0){
             arr.push_back(root->val);
             return;
           }
           nthLevel(root->left,arr,level-1);
           nthLevel(root->right,arr,level-1);
      }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>>val;
         int levels=height(root);
         for(int i=0;i<=levels;i++){
            vector<int>arr;
             nthLevel(root,arr,i);
             if(i%2!=0){
                reverse(arr.begin(),arr.end());
             }
            val.push_back(arr);
         }
         return val;
    }
};