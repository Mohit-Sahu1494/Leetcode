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
    ListNode* swapPairs(ListNode* head) {
       if(head==nullptr) return nullptr; 
         
        ListNode *temp=head;

        while(temp!=nullptr && temp->next!=nullptr){
             int data=temp->val;
             temp->val=temp->next->val;
             temp->next->val=data;
             temp=temp->next->next;
        }
        return head;
    }
};