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
private:
    int fun(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int left = fun(root->left);
        int right = fun(root->right);
        return max(left, right) + 1;
    }

public:
    int maxDepth(TreeNode* root) {
        if (root != nullptr)
            return fun(root);
        return 0;
    }
};