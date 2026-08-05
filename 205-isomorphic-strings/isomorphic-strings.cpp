class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        int n = s.length();
        map<char, vector<int>> a, b;
        for (int i = 0; i < n; i++)
            a[s[i]].push_back(i);
        for (int i = 0; i < n; i++)
            b[t[i]].push_back(i);

        map<char, bool> visited;
        for (int i = 0; i < n; i++) {
            if (visited[s[i]])
                continue;

            if (a[s[i]].size() != b[t[i]].size())
                return false;

            vector<int> x = a[s[i]];
            vector<int> y = b[t[i]];
            for (int i = 0; i < x.size(); i++) {
                if (x[i] != y[i])
                    return false;
            }
        }

        return true;
    }
};