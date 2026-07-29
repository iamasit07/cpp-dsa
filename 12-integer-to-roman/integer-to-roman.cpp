class Solution {
public:
    string repeat(int n, string s) {
        string ans = "";
        while (n > 0) {
            ans += s;
            n--;
        }
        return ans;
    }
    string intToRoman(int num) {
        vector<pair<int, string>> a = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};

        string ans = "";
        int x = 0;
        while (x < a.size() and num > 0) {
            int s = num / a[x].first;
            string temp = "";

            if (s <= 3)
                temp = repeat(s, a[x].second);
            else
                temp = a[x].second + a[x - 1].second;
            ans += temp;
            num %= a[x].first;
            x++;
        }

        return ans;
    }
};