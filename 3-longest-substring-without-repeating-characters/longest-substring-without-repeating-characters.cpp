class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), left = 0, result = 1;
        if (n < 2)
            return n;

        set<char> freq;
        for (int right = 0; right < n; right++) {
            if (freq.count(s[right])) {
                while (left < right) {
                    freq.erase(s[left]);
                    left++;
                    if (s[left - 1] == s[right])
                        break;
                }
            }
            result = max(result, right - left + 1);
            freq.insert(s[right]);
        }

        return result;
    }
};