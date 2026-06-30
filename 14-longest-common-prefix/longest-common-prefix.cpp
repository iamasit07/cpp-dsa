class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        sort(st.begin(), st.end());
        string ans = "";
        int n = st.size();
        string first = st[0], last = st[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i])
                return ans;
            ans += first[i];
        }
        return ans;
    }
};