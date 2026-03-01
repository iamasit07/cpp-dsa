class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans = "";
        int i = s.length() - 1;
        while (i >= 0 and (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                           s[i] == 'o' || s[i] == 'u'))
            i--;
        return s.substr(0, i+1);
    }
};