/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//  yah code wrong hai isko dobara karna hai
    ListNode* sortList(ListNode* head) {
      vector<int>temp;
      ListNode *mover=head;
      while(mover!=nullptr){
        temp.push_back(mover->val);
        mover=mover->next;
      }  
      sort(temp.begin(),temp.end());
      mover=head;
      int i=0;
      while(mover!=nullptr){
        mover->val=temp[i++];
        mover=mover->next;
      }
      return head;
    }
};