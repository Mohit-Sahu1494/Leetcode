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
    
    ListNode* reverse(ListNode*head){
        ListNode*curr=head;
        ListNode* prev=nullptr;
        ListNode* agla=nullptr;

        while(curr!=nullptr){
           agla=curr->next;
           curr->next=prev;
           prev=curr;
           curr=agla;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      while(fast->next!=nullptr&&fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
      }
       ListNode*temp=reverse(slow->next);
       slow->next=temp;   
      ListNode*p1=head;
      ListNode*p2=slow->next;

      while(p2!=nullptr){
        if(p1->val!=p2->val) return false;
        p1=p1->next;
        p2=p2->next;
      }
      return true;
    }
};