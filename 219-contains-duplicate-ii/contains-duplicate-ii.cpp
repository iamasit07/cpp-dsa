class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]].push_back(i);

        for (auto [x, y] : m) {
            if (y.size() > 1) {
                bool flg = false;
                for (int i = 1; i < y.size(); i++) {
                    if (y[i - 1] + k >= y[i])
                        return true;
                }
            }
        }

        return false;
    }
};