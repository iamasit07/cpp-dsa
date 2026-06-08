class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, ans = 0;
        set<char> st;

        for (int i = 0; i < s.length(); i++) {
            while (st.find(s[i]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[i]);
            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};