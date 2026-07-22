class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool flg = true;
        int count = 1, n = nums.size();
        if (n < 2)
            return true;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] >= count) {
                flg = true;
                count = 1;
            } else {
                flg = false;
                count++;
            }
        }

        return flg;
    }
};