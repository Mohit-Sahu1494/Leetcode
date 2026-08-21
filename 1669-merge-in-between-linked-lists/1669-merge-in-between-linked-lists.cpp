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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp=list1;
        for(int i=1;i<a;i++){
            temp=temp->next;
        }
        ListNode* rt=temp->next;
        ListNode* dem;

        for(int i=a;i<=b;i++){
            dem=rt->next;
            delete rt;
            rt=dem;
        }
        temp->next=list2;
        temp=temp->next;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=rt;
        return list1;
    }
};