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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *first=head;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        ListNode *kthnodeFromStart=first;
        ListNode *second=head;
        while(first->next!=nullptr){
            first=first->next;
            second=second->next;
        }
        swap(kthnodeFromStart->val,second->val);
        return head;
    }
};