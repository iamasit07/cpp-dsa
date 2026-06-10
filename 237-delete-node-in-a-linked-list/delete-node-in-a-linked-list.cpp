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
    void deleteNode(ListNode* node) {
        ListNode* itr = node;
        while (node != nullptr and node->next != nullptr) {
            node->val = node->next->val;
            itr = node;
            node = node->next;
        }
        itr->next = nullptr;
        delete node;
    }
};