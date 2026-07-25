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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return nullptr;
        int size=0;
        ListNode *fast=head;
        ListNode *slow=head;

        ListNode *temp=head;
        while(temp!=nullptr){
            size++;
            temp=temp->next;
        }
        k=k%size;
        for(int i=0;i<k;i++){
        fast=fast->next;
        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        temp=head;
        fast->next=temp;
        temp=slow->next;
        slow->next=nullptr;
        return temp;
    }
};