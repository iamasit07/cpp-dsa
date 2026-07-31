class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for (char i : s) {
            if ((i >= 'A' and i <= 'Z') or (i >= 'a' and i <= 'z') or
                (i >= '0' and i <= '9'))
                ans += tolower(i);
        }

        int st = 0, end = ans.size() - 1;
        while (st <= end) {
            if (ans[st] == ans[end]) {
                st++;
                end--;
            } else
                break;
        }

        if (st > end)
            return true;
        return false;
    }
};