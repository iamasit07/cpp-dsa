class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        int n = intervals.size();
        if (n == 0)
            return {newInterval};

        vector<vector<int>> result;
        for (int i = 0; i < n; i++) {
            if (intervals[i][1] >= newInterval[0]) {
                if (intervals[i][0] > newInterval[1]) {
                    result.push_back(newInterval);
                    result.push_back(intervals[i]);
                } else {
                    int x = i;
                    intervals[i][0] = min(intervals[i][0], newInterval[0]);
                    intervals[i][1] = max(intervals[i][1], newInterval[1]);
                    while (i < n and intervals[x][1] >= intervals[i][0])
                        i++;
                    i--;
                    result.push_back({min(intervals[i][0], intervals[x][0]),
                                      max(intervals[i][1], intervals[x][1])});
                }
                newInterval = {INT_MAX, INT_MAX};
            } else
                result.push_back(intervals[i]);
        }

        if (newInterval[0] != INT_MAX)
            result.push_back(newInterval);

        return result;
    }
};