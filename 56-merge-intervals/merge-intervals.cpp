class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, vector<int>& b) { return a[0] < b[0]; });

        int n = intervals.size();
        vector<vector<int>> ans;
        int start = intervals[0][0], end = intervals[0][1];
        for (int i = 0; i < n; i++) {
            while (i < n and end >= intervals[i][0]) {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
                i++;
            }
            ans.push_back({start, end});
            if (i < n) {
                start = intervals[i][0];
                end = intervals[i][1];
            }
            i--;
        }

        return ans;
    }
};