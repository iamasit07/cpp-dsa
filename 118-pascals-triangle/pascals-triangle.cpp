class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        if (numRows == 1)
            return ans;

        for (int x = 2; x <= numRows; x++) {
            vector<int> t(x);
            for (int i = 0; i < x; i++) {
                if (i == 0 or i == x - 1)
                    t[i] = 1;
                else
                    t[i] = ans[x - 2][i - 1] + ans[x - 2][i];
            }
            ans.push_back(t);
        }

        return ans;
    }
};