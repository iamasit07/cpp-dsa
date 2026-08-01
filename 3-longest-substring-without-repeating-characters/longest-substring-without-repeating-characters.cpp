class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), left = 0, result = 0;
        vector<int> freq(128, -1);
        for (int right = 0; right < n; right++) {
            char curr_char = s[right];
            if (freq[curr_char] >= left)
                left = freq[curr_char] + 1;
            freq[curr_char] = right;
            result = max(result, right - left + 1);
        }

        return result;
    }
};