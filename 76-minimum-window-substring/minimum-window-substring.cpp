class Solution {
private:
    bool compare(unordered_map<char, int>& mp, unordered_map<char, int>& cp) {
        if (mp.size() <= cp.size()) {
            for (auto [x, y] : mp) {
                if (cp[x] < y)
                    return false;
            }
            return true;
        }
        return false;
    }

public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        if (n < m)
            return "";

        unordered_map<char, int> mp;
        for (char i : t)
            mp[i]++;

        unordered_map<char, int> cp;
        int left = 0, right = 0, matched = 0, total_unique = mp.size();
        pair<int, int> ans = {0, INT_MAX};
        while (right < n) {
            if (mp.find(s[right]) != mp.end()) {
                cp[s[right]]++;
                if (cp[s[right]] == mp[s[right]])
                    matched++;
                if (matched == total_unique) {
                    while (left <= right) {
                        if ((ans.second - ans.first) >= (right - left))
                            ans = {left, right};
                        if (mp.find(s[left]) == mp.end())
                            left++;
                        else {
                            cp[s[left]]--;
                            if (cp[s[left]] < mp[s[left]])
                                matched--;
                            left++;
                        }
                        if (matched < total_unique)
                            break;
                    }
                }
            }
            right++;
        }
        if (ans.second == INT_MAX)
            return "";
        return s.substr(ans.first, (ans.second - ans.first + 1));
    }
};