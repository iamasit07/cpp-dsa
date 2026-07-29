class Solution {
public:
    int lengthOfLastWord(string s) {
        regex pattern(R"(\s+)");
        string filter = regex_replace(s, pattern, " ");
        int start = 0, n = filter.size();
        if (filter[n - 1] == ' ')
            filter.pop_back();
        n = filter.size();
        for (int i = 0; i < (n - 1); i++) {
            if (filter[i] == ' ' and filter[i + 1] != ' ')
                start = i + 1;
        }
        return (n - start);
    }
};