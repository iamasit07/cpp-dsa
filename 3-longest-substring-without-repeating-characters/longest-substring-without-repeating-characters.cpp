class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), left = 0, result = 1;
        if (n < 2)
            return n;
            
        map<char, int> freq;
        for (int right = 0; right < n; right++) {
            if (freq.find(s[right]) != freq.end()) {
                while (left < right) {
                    freq.erase(s[left]);
                    left++;
                    if (s[left - 1] == s[right])
                        break;
                }
            }
            result = max(result, right - left + 1);
            freq[s[right]] = right;
        }

        return result;
    }
};