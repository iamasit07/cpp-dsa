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
    bool isPalindrome(ListNode* head) {
        string ans = "";
        while (head != nullptr) {
            ans += '0' + (head->val);
            head = head->next;
        }

        int left = 0, right = ans.size() - 1;
        while (left <= right) {
            if (ans[left++] != ans[right--])
                return false;
        }

        return true;
    }
};