class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());

        int start = points[0][0], end = points[0][1];
        int count1 = 1, count2 = 1;
        for (auto i : points) {
            if (start <= i[0] and end >= i[0]) {
                end = min(end, i[1]);
                start = max(start, i[0]);
            } else {
                count1++;
                start = i[0];
                end = i[1];
            }
        }
        start = points[n - 1][0], end = points[n - 1][1];
        for (int i = n - 1; i >= 0; i--) {
            if (start <= points[i][0] and end >= points[i][0]) {
                end = min(end, points[i][1]);
                start = max(start, points[i][0]);
            } else {
                count2++;
                start = points[i][0];
                end = points[i][1];
            }
        }

        return min(count1, count2);
    }
};