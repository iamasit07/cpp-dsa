class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        bool row = false, col = false;

        for (auto i : matrix) {
            if (i[0] == 0)
                col = true;
        }

        for (int i = 0; i < m; i++) {
            if (matrix[0][i] == 0)
                row = true;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = n - 1; i > 0; i--) {
            if (matrix[i][0] == 0) {
                for (int x = 0; x < m; x++)
                    matrix[i][x] = 0;
            }
        }

        for (int i = m - 1; i >= 0; i--) {
            if (matrix[0][i] == 0) {
                for (int x = 0; x < n; x++)
                    matrix[x][i] = 0;
            }
        }

        if (row) {
            for (int i = 0; i < m; i++)
                matrix[0][i] = 0;
        }

        if (col) {
            for (auto& i : matrix)
                i[0] = 0;
        }
    }
};