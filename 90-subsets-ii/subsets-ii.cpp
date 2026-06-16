class Solution {
public:
    void subset(vector<vector<int>>& res, vector<int>& nums, vector<int>& s,
                int index) {
        res.push_back(s);
        for (int i = index; i < nums.size(); i++) {
            if (i > index and nums[i] == nums[i - 1])
                continue;
            s.push_back(nums[i]);
            subset(res, nums, s, i + 1);
            s.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> s;
        sort(nums.begin(), nums.end());
        subset(ans, nums, s, 0);
        return ans;
    }
};