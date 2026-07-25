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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *temp=head;
        ListNode *h1=new ListNode(10);
        ListNode *h2=new ListNode(10);
         ListNode *t1=h1;
         ListNode *t2=h2;

        while(temp!=nullptr){
            if(temp->val>=x){
                t2->next=temp;
                t2=t2->next;
            }
            else{
                t1->next=temp;
                t1=t1->next;
            }
            temp=temp->next;
        }
        t2->next=nullptr;
        t1->next=h2->next;
        return h1->next;
    }
};