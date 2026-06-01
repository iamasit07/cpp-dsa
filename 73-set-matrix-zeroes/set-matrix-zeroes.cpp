class Solution {
public:
    void setFun(vector<vector<int>>& matrix, int i, int j) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int x = 0; x < i; x++)
            matrix[x][j] = 0;
        for (int x = i + 1; x < n; x++)
            matrix[x][j] = 0;

        for (int x = 0; x < j; x++)
            matrix[i][x] = 0;
        for (int x = j + 1; x < m; x++)
            matrix[i][x] = 0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0)
                    ans.push_back({i, j});
            }
        }

        for (auto i : ans) {
            setFun(matrix, i.first, i.second);
        }
    }
};