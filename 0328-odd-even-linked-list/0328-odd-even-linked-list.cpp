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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oddHead=new ListNode(0);
        ListNode *evenHead=new ListNode(0);
        ListNode *t1=oddHead;
        ListNode *t2=evenHead;

        ListNode *temp=head;

        while(temp!=nullptr){
            t1->next=temp;
            t1=t1->next;
            temp=temp->next;
            
            t2->next=temp;
            if(temp!=nullptr){
               t2=t2->next;
              temp=temp->next;
            }
        }
        t2->next=nullptr;
        t1->next=evenHead->next;
      return oddHead->next;
    }
};