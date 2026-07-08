class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if (!root)
            return 0;
        int ans = INT_MIN;
        fc(root, ans);
        return ans;
    }

private:
    int fc(TreeNode* root, int& sum) {
        if (!root)
            return 0;

        int left = fc(root->left, sum);
        int right = fc(root->right, sum);

        int value = max(left, right);
        int maxside = max(root->val, value + root->val);
        int whole = max(maxside, left + right + root->val);

        sum = max(sum, whole);
        return maxside;
    }
};