class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 0, n = nums.size(), cnt = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] == nums[i])
                cnt++;
            else {
                if (cnt > 1) {
                    nums[x++] = nums[i - 1];
                    nums[x++] = nums[i - 1];
                } else {
                    for (int t = 0; t < cnt; t++)
                        nums[x++] = nums[i - 1];
                }
                cnt = 1;
            }
        }

        if (cnt > 1) {
            nums[x++] = nums[n - 1];
            nums[x++] = nums[n - 1];
        } else {
            for (int t = 0; t < cnt; t++)
                nums[x++] = nums[n - 1];
        }

        return x;
    }
};