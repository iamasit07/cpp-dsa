class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        if (numRows == 1)
            return ans;

        for (int x = 2; x <= numRows; x++) {
            vector<int> t(x, 1);
            for (int i = 1; i < x - 1; i++)
                t[i] = ans[x - 2][i - 1] + ans[x - 2][i];
            ans.push_back(t);
        }

        return ans;
    }
};