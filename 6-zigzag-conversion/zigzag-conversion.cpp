class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows, "");
        bool flg = true;
        int x = 0;

        if (numRows == 1)
            return s;

        for (auto i : s) {
            if (flg)
                ans[x++].push_back(i);
            else
                ans[x--].push_back(i);
            if (x == numRows - 1)
                flg = false;
            else if (x == 0)
                flg = true;
        }

        string result = "";
        for (auto i : ans)
            result += i;
        return result;
    }
};