/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==nullptr) return {};
        vector<vector<int>>ans;
        
         queue<Node*>q;
         q.push(root);

         while(!q.empty()){
            int size=q.size();
            vector<int>arr;

            for(int i=0;i<size;i++){
                Node *curr=q.front();
                arr.push_back(curr->val);
                q.pop();

                for(Node *temp:curr->children){
                    q.push(temp);
                }
            }
            ans.push_back(arr);
         }
      return ans;
    }
};