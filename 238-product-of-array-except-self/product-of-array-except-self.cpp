class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0, prod = 1, n = nums.size();
        for (auto i : nums) {
            if (i == 0) {
                zero++;
                continue;
            }
            prod *= i;
        }

        if (zero > 1)
            return vector<int>(n, 0);

        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            if (zero > 0) {
                if (nums[i] == 0)
                    ans[i] = prod;
            } else
                ans[i] = prod / nums[i];
        }

        return ans;
    }
};