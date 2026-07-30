class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for (char i : s) {
            if (i != ' ')
                word += i;
            else if (word.length() > 0) {
                words.push_back(word);
                word = "";
            }
        }

        reverse(words.begin(), words.end());
        for (auto i : words)
            word += " " + i;
        if (word[0] == ' ')
            word.erase(0, 1);
        return word;
    }
};