/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head)
            return false;
        ListNode *fast = head, *slow = head;
        if (fast->next == nullptr)
            return false;
        fast = fast->next->next;
        slow = slow->next;
        while (fast != slow) {
            if (fast == nullptr or fast->next == nullptr)
                return false;
            fast = fast->next->next;
            slow = slow->next;
        }

        return (fast == slow);
    }
};