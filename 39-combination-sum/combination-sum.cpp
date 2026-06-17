class Solution {
public:
    void fun(int i, int t, vector<int>& arr, vector<vector<int>>& ans,
             vector<int>& ds) {
        if (i == arr.size()) {
            if (t == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (arr[i] <= t) {
            ds.push_back(arr[i]);
            fun(i, t - arr[i], arr, ans, ds);
            ds.pop_back();
        }
        fun(i + 1, t, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        fun(0, target, candidates, ans, ds);
        return ans;
    }
};