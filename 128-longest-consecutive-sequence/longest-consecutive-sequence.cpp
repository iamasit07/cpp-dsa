class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);

        if (s.empty())
            return 0;

        int count = 1, lastval = -1, ans = 0;
        bool flg = true;
        for (auto i : s) {
            if (flg) {
                lastval = i;
                flg = false;
                continue;
            }

            if (!flg and lastval + 1 == i)
                count++;
            else {
                ans = max(ans, count);
                count = 1;
            }
            lastval = i;
        }

        ans = max(ans, count);

        return ans;
    }
};