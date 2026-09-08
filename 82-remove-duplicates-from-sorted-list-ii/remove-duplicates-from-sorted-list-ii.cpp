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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr or head->next == nullptr)
            return head;
        ListNode* ans = new ListNode(0);
        ListNode* result = ans;
        ListNode *one = head, *sec = head->next;
        while (sec != nullptr) {
            if (one->val == sec->val) {
                while (sec != nullptr and sec->val == one->val)
                    sec = sec->next;
                one = sec;
                if (sec == nullptr)
                    break;
                sec = sec->next;
            } else {
                ans->next = new ListNode(one->val);
                ans = ans->next;
                one = one->next;
                sec = sec->next;
            }
        }
        if (one != nullptr)
            ans->next = new ListNode(one->val);
        return result->next;
    }
};