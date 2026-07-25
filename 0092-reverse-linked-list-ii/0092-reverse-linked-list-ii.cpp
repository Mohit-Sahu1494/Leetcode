class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // prev ko left-1 position tak le jao
        ListNode* prev = dummy;
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Reverse start
        ListNode* curr = prev->next;
        ListNode* next = nullptr;
        ListNode* revPrev = nullptr;

        for (int i = left; i <= right; i++) {
            next = curr->next;
            curr->next = revPrev;
            revPrev = curr;
            curr = next;
        }

        // Connections
        ListNode* reverseStart = prev->next;
        prev->next = revPrev;
        reverseStart->next = curr;

        return dummy->next;
    }
};