class Solution {
private:
    int atoi(string& s, int i, int& ans, bool neg) {
        if (s[i] == ' ') {
            if (i != 0)
                return (neg ? -ans : ans);
            s.erase(s.begin() + i);
            return atoi(s, i, ans, neg);
        } else if (s[i] == '-' or s[i] == '+') {
            if (i != 0)
                return (neg ? -ans : ans);
            if (s[i] == '-')
                neg = true;
        } else {
            if (i == s.length())
                return (neg ? -ans : ans);
            if (isdigit(s[i])) {
                int digit = s[i] - '0';
                if (ans > (INT_MAX / 10) or
                    (ans == (INT_MAX / 10) and digit > 7))
                    return neg ? INT_MIN : INT_MAX;
                ans = (ans * 10) + digit;
                return atoi(s, i + 1, ans, neg);
            } else
                return (neg ? -ans : ans);
        }

        return atoi(s, i + 1, ans, neg);
    }

public:
    int myAtoi(string s) {
        int n = s.length(), start = -1;
        int ans = 0;
        ans = atoi(s, 0, ans, false);

        return ans;
    }
};