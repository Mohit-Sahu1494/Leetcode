class Solution {
    private:
    int preIndex;
public:
   
    TreeNode * helper(vector<int>&preOrder,vector<int>&inOrder,int inStart,int inEnd){
      if(inStart>inEnd) return nullptr;
      int rootVal=preOrder[preIndex++];
      TreeNode *root= new TreeNode(rootVal);
      int pos;
      for(int i=inStart;i<=inEnd;i++){
        if(inOrder[i]==rootVal){
            pos=i;
            break;
        }
      }
      root->left=helper(preOrder,inOrder,inStart,pos-1);
      root->right=helper(preOrder,inOrder,pos+1,inEnd);
      return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         preIndex=0;
         return helper(preorder,inorder,0,inorder.size()-1);
    }
};