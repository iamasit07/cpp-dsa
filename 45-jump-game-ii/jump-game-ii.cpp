class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;

        int jump = 0, farthest = 0, curr_end = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i + nums[i] > farthest)
                farthest = i + nums[i];
            if (i == curr_end) {
                jump++;
                curr_end = farthest;
                farthest = 0;

                if (curr_end >= n - 1)
                    break;
            }
        }

        return jump;
    }
};