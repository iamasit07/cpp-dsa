class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, sum = 0;
        int n = nums.size();
        while (end < n and sum < target) {
            sum += nums[end];
            end++;
        }

        if (sum < target)
            return 0;

        int ans = end--;
        while (start <= end and end < n) {
            cout << sum << " " << start << " " << end << '\n';
            if (sum >= target) {
                ans = min(ans, (end - start + 1));
                sum -= nums[start];
                start++;
            } else {
                end++;
                if (end < n)
                    sum += nums[end];
            }
        }

        return ans;
    }
};