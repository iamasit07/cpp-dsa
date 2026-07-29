class Solution {
private:
    string fun(string s) {
        string ans = "";
        for (int i = 0; i < (s.length() - 1); i++) {
            if (s[i] == ' ' and s[i + 1] == ' ')
                continue;
            else
                ans += s[i];
        }
        if (s.back() != ' ')
            ans += s.back();

        return ans;
    }

public:
    int lengthOfLastWord(string s) {
        string filter = fun(s);
        int start = 0, n = filter.length();
        if (filter[n - 1] == ' ')
            filter.pop_back();
        n = filter.length();
        for (int i = 0; i < (n - 1); i++) {
            if (filter[i] == ' ' and filter[i + 1] != ' ')
                start = i + 1;
        }
        return (n - start);
    }
};