class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length(), ans = 0;
        s = s + s;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int x = i + 1; x < (i + n); x++) {
                if (s[x - 1] == s[x])
                    count++;
            }
            ans += (count == k);
        }

        return ans;
    }
};