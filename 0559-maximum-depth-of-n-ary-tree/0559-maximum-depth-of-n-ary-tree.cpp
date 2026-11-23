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
int maxi=0;
    int maxDepth(Node* root) {
        if(root==nullptr) return 0;
        int res=0;
         for(Node *curr:root->children){
           res=max(res,maxDepth(curr));
         }
       return 1+res;
    } 

};