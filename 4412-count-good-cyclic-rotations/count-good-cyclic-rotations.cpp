class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long long x = accumulate(nums.begin(), nums.begin() + (n / 2), 0LL);
        long long total = accumulate(nums.begin(), nums.end(), 0LL);

        int mid = n / 2, ans = 0;
        for (int i = 0; i < n; i++) {
            x += nums[(i + n / 2) % n] - nums[i];
            if (x < (total - x))
                ans++;
        }

        return ans;
    }
};