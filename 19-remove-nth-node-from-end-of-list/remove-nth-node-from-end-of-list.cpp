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
        int len = 0;
        ListNode* itr = head;
        while (itr != nullptr) {
            len++;
            itr = itr->next;
        }

        itr = head;
        n = (len - n) + 1;

        if (n == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int count = 1;
        while (count < (n - 1)) {
            itr = itr->next;
            count++;
        }

        ListNode* temp = itr->next;
        itr->next = itr->next->next;
        delete temp;

        return head;
    }
};