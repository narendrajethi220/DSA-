// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head; // Handle empty or single-node lists efficiently
        }

        ListNode* prev = head, *curr = head->next;
        int i = 0;
        while (curr) {
            // Update i for all nodes, including duplicates
            i++;

            if (prev->val != curr->val) {
                prev->next = curr;
                prev = curr; // Update previous only for non-duplicates
            }
            curr = curr->next;
        }

        prev->next = nullptr;
        return head;
    }
};
