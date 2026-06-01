class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currSum = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            currSum += nums[i];
            if (nums[i] > currSum) {
                currSum = nums[i];
            }

            if (maxSum < currSum)
                maxSum = currSum;
        }

        return maxSum;
    }
};