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
    ListNode* reverseList(ListNode* head) {
        ListNode *ans = nullptr, *curr = head;
        while (curr != nullptr) {
            ListNode* nextCurr = curr->next;
            curr->next = ans;

            ans = curr;
            curr = nextCurr;
        }

        return ans;
    }
};