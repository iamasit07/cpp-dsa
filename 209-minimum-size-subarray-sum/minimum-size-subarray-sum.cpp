class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, result = INT_MAX, n = nums.size();
        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (left <= right and sum >= target) {
                result = min(result, right - left + 1);
                sum -= nums[left++];
            }
        }

        return (result == INT_MAX ? 0 : result);
    }
};