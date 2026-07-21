class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 2, n = nums.size();
        if (n < 3)
            return n;

        for (int i = 2; i < n; i++) {
            if (nums[i] !=  nums[x - 2]) {
                nums[x] = nums[i];
                x++;
            }
        }

        return x;
    }
};