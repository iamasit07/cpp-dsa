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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return head;

        int count = 0;
        ListNode *curr = head, *result = head;
        while (curr != nullptr) {
            curr = curr->next;
            count++;
        }

        n = count - n + 1;
        count = 1;

        if (n == 1)
            return result->next;
            
        curr = head;
        while (curr != nullptr and count + 1 < n) {
            curr = curr->next;
            count++;
        }

        if (curr == nullptr or curr->next == nullptr)
            return nullptr;

        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete (temp);
        return result;
    }
};