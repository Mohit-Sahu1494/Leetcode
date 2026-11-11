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
    int helper(TreeNode *root,int sum){
      if(root==nullptr)return 0;
      if(root->left==nullptr && root->right==nullptr){
        return sum*10+root->val;
      }
      int a=helper(root->left,sum*10+root->val);
      int b=helper(root->right,sum*10+root->val);
      return a+b;
    }
    int sumNumbers(TreeNode* root) {
        return  helper(root,0);
    }
};