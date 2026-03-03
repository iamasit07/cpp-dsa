class Solution {
private:
    string invert(string s) {
        string ans = "";
        for (auto i : s)
            ans += (i == '0' ? '1' : '0');
        return ans;
    }

public:
    char findKthBit(int n, int k) {
        string ans = "0";
        while (n--) {
            string temp = invert(ans);
            reverse(temp.begin(), temp.end());
            ans = ans + "1" + temp;
        }

        return ans[k - 1];
    }
};