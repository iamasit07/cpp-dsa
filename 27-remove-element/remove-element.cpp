class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == val)
                continue;
            nums[x++] = nums[i];
        }

        return x;
    }
};