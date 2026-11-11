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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
       vector<double>ans;
       q.push(root);

       while(!q.empty()){
          int size=q.size();
           double sum=0;

           for(int i=0;i<size;i++){
            TreeNode *temp=q.front();
            q.pop();
            sum+=temp->val;
            if(temp->left!=nullptr){
                q.push(temp->left);
            }
            if(temp->right!=nullptr)q.push(temp->right);
           }
           ans.push_back(sum/size);
       }
       return ans;
    }
};