class Solution {
private:
    int fun(vector<vector<int>>& a, int i, int j, int n, int m) {
        int count = 0;
        if (i != 0) {
            count += (abs(a[i - 1][j]) == 1);
            if (j != 0)
                count += (abs(a[i - 1][j - 1]) == 1);
            if (j != m - 1)
                count += (abs(a[i - 1][j + 1]) == 1);
        }

        if (i != n - 1) {
            count += (abs(a[i + 1][j]) == 1);
            if (j != 0)
                count += (abs(a[i + 1][j - 1]) == 1);
            if (j != m - 1)
                count += (abs(a[i + 1][j + 1]) == 1);
        }

        if (j != 0)
            count += (abs(a[i][j - 1]) == 1);
        if (j != m - 1)
            count += (abs(a[i][j + 1]) == 1);

        return count;
    }

public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val = fun(board, i, j, n, m);
                if (board[i][j] == 0) {
                    if (val == 3)
                        board[i][j] = 2;
                } else {
                    if (val < 2)
                        board[i][j] = -1;
                    else if (val > 3)
                        board[i][j] = -1;
                }
            }
        }

        for (auto& x : board) {
            for (auto& i : x) {
                if (i == -1)
                    i = 0;
                else if (i == 2)
                    i = 1;
            }
        }
    }
};