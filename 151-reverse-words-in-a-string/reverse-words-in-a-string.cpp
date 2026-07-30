class Solution {
public:
    string reverseWords(string s) {
        string ans = "", word = "";
        for (char i : s) {
            if (i != ' ')
                word += i;
            else if (word.length() > 0) {
                ans = word + " " + ans;
                word = "";
            }
        }
        if (word.length() > 0)
            ans = word + " " + ans;
        ans.pop_back();
        return ans;
    }
};