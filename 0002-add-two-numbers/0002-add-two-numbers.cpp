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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1=l1;
        ListNode * temp2=l2;

        ListNode *head=new ListNode(10);
        ListNode *temp3=head;
             int carray=0;
        while(temp1!=nullptr|| temp2!=nullptr){
            int x = (temp1 != nullptr) ? temp1->val : 0;
            int y = (temp2 != nullptr) ? temp2->val : 0;
            int sum= x+y+carray;
             int digit=sum%10;
             ListNode *newNode=new ListNode(digit);
            temp3->next=newNode;
            temp3=temp3->next;

            carray=sum/10;

            if(temp2!=nullptr)temp2=temp2->next;
            if(temp1!=nullptr)temp1=temp1->next;
        }
        if(carray){
       temp3->next = new ListNode(carray);
     }
        return head->next;
    }
};