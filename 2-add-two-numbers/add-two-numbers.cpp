class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* dummy = ans;

        int carry = 0;
        while (l1 != nullptr or l2 != nullptr or carry != 0) {
            int x = l1 ? l1->val : 0, y = l2 ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;

            ans->next = new ListNode(sum % 10);
            ans = ans->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        ListNode* temp = dummy;
        dummy = dummy->next;
        delete temp;
        return dummy;
    }
};