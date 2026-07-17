class Solution {
public:
    ListNode* reverse(ListNode*head){
        if( head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* newList=reverse(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newList;
    }
    ListNode* reverseList(ListNode* head) {

        //  yah iteration isko kiya hu 
    //     ListNode *curr=head;
    //     ListNode *prev=nullptr;
    //     ListNode *agla=nullptr;

    //     while(curr!=nullptr){
    //         agla=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=agla;
    //     }
    //   return prev;

    //    ab recoursive function se solve karenge .
    ListNode* temp=reverse(head);
        return temp;

    }
};