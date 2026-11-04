class Solution {
public:
     int hight(TreeNode *root){
         if(root==nullptr) return 0;
         return 1+max(hight(root->left),hight(root->right));
     }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
       int leftHeight=hight(root->left);
       int rightHeight=hight(root->right);
       if(abs(leftHeight-rightHeight)>1){
        return false;
       }

      return isBalanced(root->left) && isBalanced(root->right);
    }
};