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

        int n = s.length(), ans = a[s[n - 1]];
        for (int i = n - 2; i >= 0; i--) {
            if (a[s[i]] < a[s[i + 1]])
                ans -= a[s[i]];
            else
                ans += a[s[i]];
        }
        return ans;
    }
};