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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        ListNode *a = list1, *b = list2;
        while (a != nullptr and b != nullptr) {
            if (a->val < b->val) {
                ListNode* node = new ListNode(a->val);
                ans->next = node;
                ans = ans->next;
                a = a->next;
            } else {
                ListNode* node = new ListNode(b->val);
                ans->next = node;
                ans = ans->next;
                b = b->next;
            }
        }

        while (a != nullptr) {
            ListNode* node = new ListNode(a->val);
            ans->next = node;
            ans = ans->next;
            a = a->next;
        }

        while (b != nullptr) {
            ListNode* node = new ListNode(b->val);
            ans->next = node;
            ans = ans->next;
            b = b->next;
        }

        return dummy->next;
    }
};