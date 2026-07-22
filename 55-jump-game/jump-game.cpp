class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count = 1, n = nums.size();
        if (n < 2)
            return true;

        for (int i = n - 2; i >= 0; i--)
            count = (nums[i] < count ? count + 1 : 1);

        return (count == 1);
    }
};