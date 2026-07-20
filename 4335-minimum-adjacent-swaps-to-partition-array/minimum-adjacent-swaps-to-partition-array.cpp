class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long mod = 1e9 + 7, c1 = 0, c2 = 0, ans = 0;
        for (auto i : nums) {
            if (i < a)
                ans += c1 + c2;
            else if (i > b)
                c2++;
            else {
                ans += c2;
                c1++;
            }
        }
        return ans % mod;
    }
};