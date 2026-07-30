class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result, word;
        int word_len = 0;
        for (auto i : words) {
            if ((word_len + i.length() + word.size()) <= maxWidth)
                word_len += i.length();
            else {
                string add = "";
                int left = maxWidth - word_len, count = word.size() - 1;
                if (count == 0)
                    add += word[0] + string(left, ' ');
                else {
                    int space = count, extra = left % count;
                    for (auto i : word) {
                        add += i;
                        if (space > 0) {
                            add += string(left / count, ' ');
                            if (extra > 0) {
                                extra--;
                                add += ' ';
                            }
                            space--;
                        }
                    }
                }
                result.push_back(add);
                word.clear();
                word_len = i.length();
            }
            word.push_back(i);
        }

        string add = "";
        int left = maxWidth - word_len, count = word.size() - 1;
        if (count == 0)
            add += word[0] + string(left, ' ');
        else {
            int space = count;
            for (auto i : word)
                add += i + ' ';
            add.pop_back();
            add += string(maxWidth - add.length(), ' ');
        }
        result.push_back(add);

        return result;
    }
};