class Solution {
public:
     int hight(TreeNode *root){
         if(root==nullptr) return 0;
         return 1+max(hight(root->left),hight(root->right));
     }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
       int leftHeight=hight(root->left);
       cout<<"left heihgt : "<<leftHeight<<endl;
       int rightHeight=hight(root->right);
         cout<<"right heihgt : "<<rightHeight<<endl;
       if(abs(leftHeight-rightHeight)>1){
        return false;
       }

      return isBalanced(root->left) && isBalanced(root->right);
    }
};