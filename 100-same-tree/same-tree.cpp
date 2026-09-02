/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr and q == nullptr)
            return true;

        queue<TreeNode*> q1, q2;
        q1.push(p);
        q2.push(q);
        while (!q1.empty() and !q2.empty()) {
            TreeNode *t1 = nullptr, *t2 = nullptr;
            while (!q1.empty() and !q2.empty()) {
                t1 = q1.front();
                t2 = q2.front();
                q1.pop(), q2.pop();
                if (t1 == nullptr and t2 == nullptr)
                    continue;
                else if (t1 == nullptr or t2 == nullptr)
                    return false;
                else if (t1->val != t2->val)
                    return false;
                q1.push(t1->left);
                q1.push(t1->right);
                q2.push(t2->left);
                q2.push(t2->right);
            }
        }

        return true;
    }
};