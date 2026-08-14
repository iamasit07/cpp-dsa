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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 or head == nullptr)
            return head;

        int count = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        if (k % count == 0)
            return head;

        k = count - (k % count);
        count = 0;
        curr = head;
        while (count + 1 < k) {
            curr = curr->next;
            count++;
        }

        ListNode* ans = curr->next;
        curr->next = nullptr;

        ListNode* copy = ans;
        while (copy->next != nullptr)
            copy = copy->next;

        copy->next = head;
        return ans;
    }
};