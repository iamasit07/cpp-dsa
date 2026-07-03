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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        trav(root, ans);
        return ans;
    }

private:
    void trav(TreeNode* root, vector<int>& ans) {
        if (root != nullptr) {
            trav(root->left, ans);
            trav(root->right, ans);
            ans.push_back(root->val);
        }
    }
};