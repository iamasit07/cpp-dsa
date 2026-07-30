class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for (char i : s) {
            if (i == ' ' and word.length() > 0) {
                words.push_back(word);
                word = "";
            } else if (i != ' ')
                word += i;
        }

        if (word.length() > 0)
            words.push_back(word);

        reverse(words.begin(), words.end());
        word = "";
        for (auto i : words)
            word += i + " ";
        word.pop_back();

        return word;
    }
};