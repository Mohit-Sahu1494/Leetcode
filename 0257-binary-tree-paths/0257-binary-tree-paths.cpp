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
    void helper(TreeNode *root,vector<string>&ans,string str){
     if(root==nullptr) return ;
     if(root->left==nullptr && root->right==nullptr){
        str+=to_string(root->val);
        string s="";
        for(char ch:str){
            s+=ch;
        }
        ans.push_back(str);
        return ;
     }
      str+=to_string(root->val)+"->";
       helper(root->left,ans,str);
        helper(root->right,ans,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
          vector<string>ans;
          helper(root,ans,"");
          return ans;
    }
};