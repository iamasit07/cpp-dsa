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
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* result = ans;
        while (t1 != nullptr and t2 != nullptr) {
            int sum = t1->val + t2->val + carry;
            if (sum > 9)
                carry = sum / 10;
            else
                carry = 0;
            ans->next = new ListNode(sum % 10);
            ans = ans->next;
            t1 = t1->next;
            t2 = t2->next;
        }

        while (t1 != nullptr) {
            int sum = t1->val + carry;
            if (sum > 9)
                carry = sum / 10;
            else
                carry = 0;
            ans->next = new ListNode(sum % 10);
            ans = ans->next;
            t1 = t1->next;
        }

        while (t2 != nullptr) {
            int sum = t2->val + carry;
            if (sum > 9)
                carry = sum / 10;
            else
                carry = 0;
            ans->next = new ListNode(sum % 10);
            ans = ans->next;
            t2 = t2->next;
        }

        if (carry > 0)
            ans->next = new ListNode(carry % 10);

        return result->next;
    }
};