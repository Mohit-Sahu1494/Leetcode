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
private:
 int postIndex;
public:
   TreeNode * helper(vector<int>&postorder,vector<int>&inorder,int inStart,int inEnd){
    if(inStart>inEnd) return nullptr;
    int rootVal=postorder[postIndex--];
    TreeNode *root=new TreeNode(rootVal);
    int pos;
    for(int i=inStart;i<=inEnd;i++){
        if(inorder[i]==rootVal){
            pos=i;
            break;
        }
    }
    root->right=helper(postorder,inorder,pos+1,inEnd);
    root->left=helper(postorder,inorder,inStart,pos-1);
  
    return root;
   }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postIndex=inorder.size()-1;
        return helper(postorder,inorder,0,inorder.size()-1);
    }
};