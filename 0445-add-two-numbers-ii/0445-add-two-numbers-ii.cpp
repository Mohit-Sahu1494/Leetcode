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
        ListNode * temp=l1;
        stack<ListNode*>st;
        while(temp!=nullptr){
            st.push(temp);
            temp=temp->next;
        }
         temp=l2;
         stack<ListNode*>st2;
        while(temp!=nullptr){
            st2.push(temp);
            temp=temp->next;
        }
        ListNode *h=nullptr;
        int carry=0;
        while(!st.empty()||!st2.empty()||carry){
            int sum=carry;

            if(!st.empty()){
                sum+=st.top()->val;
                st.pop();
            }
           
            if(!st2.empty()){
                sum+=st2.top()->val;
                st2.pop();
            }
           carry=sum/10;
           ListNode* p=new ListNode(sum%10);
           p->next=h;
           h=p;
        }
        return h;
    }
};