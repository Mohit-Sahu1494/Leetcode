class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=nullptr;
        ListNode *agla=nullptr;

        while(curr!=nullptr){
            agla=curr->next;
            curr->next=prev;
            prev=curr;
            curr=agla;
        }
      return prev;
    }
};