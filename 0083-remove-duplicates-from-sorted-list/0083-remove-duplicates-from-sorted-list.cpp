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
    ListNode* deleteDuplicates(ListNode* head) {
        

        ListNode *temp=head;
        ListNode *slow=head;

        while(temp!=nullptr){
            if(slow->val!=temp->val){
                slow->next=temp;
                slow=slow->next;
            }
            temp=temp->next;
        }
        if(slow!=nullptr){
            slow->next=nullptr;
        }
        return head;
    }
};