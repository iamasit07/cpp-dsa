class Solution {
private:
    string repeat(int n, string s) {
        string ans = "";
        while (n--)
            ans += s;
        return ans;
    }

public:
    string intToRoman(int num) {
        vector<pair<int, string>> a = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};

        string ans = "";
        int x = 0;
        while (x < a.size() and num > 0) {
            int s = num / a[x].first;
            ans += repeat(s, a[x].second);
            num %= a[x].first;
            x++;
        }

        return ans;
    }
};