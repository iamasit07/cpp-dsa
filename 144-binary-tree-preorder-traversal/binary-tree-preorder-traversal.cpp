class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curNode = root;

        while(curNode) {
            if(!curNode->left) {
                ans.push_back(curNode->val);
                curNode = curNode->right;
                continue;
            }

            TreeNode* pred = curNode->left;
            while(pred->right && pred->right != curNode)
                pred = pred->right;
                  
            if(!pred->right) {
                ans.push_back(curNode->val);
                pred->right = curNode;
                curNode = curNode->left;
            } else {
                pred->right = nullptr;
                curNode = curNode->right;
            }
        }

        return ans;
    }
};