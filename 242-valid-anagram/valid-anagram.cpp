class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ch(26, 0);
        for (auto i : s)
            ch[i - 'a']++;
        for (auto i : t)
            ch[i - 'a']--;

        for (auto i : ch)
            if (i != 0)
                return false;
        return true;
    }
};