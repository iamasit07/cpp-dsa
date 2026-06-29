class Solution {
public:
    int romanToInt(string s) {
        map<char, int> a;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;

        int ans = 0;
        for (int i = (s.length() - 1); i >= 0; i--) {
            if (i == 0) {
                ans += a[s[i]];
                break;
            }

            if ((s[i - 1] == 'I' and s[i] == 'V') or
                (s[i - 1] == 'I' and s[i] == 'X') or
                (s[i - 1] == 'X' and s[i] == 'L') or
                (s[i - 1] == 'X' and s[i] == 'C') or
                (s[i - 1] == 'C' and s[i] == 'D') or
                (s[i - 1] == 'C' and s[i] == 'M')) {
                ans += a[s[i]] - a[s[i - 1]];
                i--;
            } else {
                ans += a[s[i]];
            }
        }
        return ans;
    }
};