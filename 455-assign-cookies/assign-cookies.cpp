class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());

        int x = 0, cnt = 0;
        for (int i = 0; i < g.size() and x < s.size(); i++) {
            if (g[i] <= s[x]) {
                cnt++;
                x++;
            }
        }

        return cnt;
    }
};