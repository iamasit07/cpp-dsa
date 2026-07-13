class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long sum = accumulate(nums.begin(), nums.end(), 0LL),
                  mod = 1e9 + 7;
        long long x = (sum + k - 1) / k % mod;

        return (x - 1) * x / 2 % mod;
    }
};