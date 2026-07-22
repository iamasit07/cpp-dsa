class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0, count = 0, n = nums.size();
        if (n == 1)
            return 0;

        while (i < n) {
            int x = nums[i];
            if (i + x + 1 >= n) {
                count++;
                break;
            }

            int minv = INT_MAX, itr = 0;
            for (int it = i + 1; it <= min(n, x + i); it++) {
                if (n - it - 1 - nums[it] <= minv) {
                    minv = n - it - nums[it] - 1;
                    itr = it;
                }
            }

            i = itr;
            count++;
        }

        return count;
    }
};