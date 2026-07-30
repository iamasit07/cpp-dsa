class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = INT_MAX;
        for (auto i : strs)
            n = min(n, (int)i.length());

        for (int x = 0; x < n; x++) {
            bool flg = true;
            char a = strs[0][x];
            for (auto i : strs) {
                if (i[x] != a)
                    flg = false;
            }

            if (flg)
                ans += a;
            else
                break;
        }

        return ans;
    }
};