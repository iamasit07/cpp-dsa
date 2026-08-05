class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (auto i : strs) {
            string s = string(26, '0');
            for (auto x : i)
                s[x - 'a']++;
            m[s].push_back(i);
        }

        vector<vector<string>> ans;
        for (auto [x, y] : m)
            ans.push_back(y);
        return ans;
    }
};