class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for (int i = 0; i < m; i++) {
            string x = "";
            for (int j = 0; j < n; j++) {
                if (i == m - 1 or j == 0)
                    x += '.';
                else
                    x += '#';
            }
            ans.push_back(x);
        }

        return ans;
    }
};