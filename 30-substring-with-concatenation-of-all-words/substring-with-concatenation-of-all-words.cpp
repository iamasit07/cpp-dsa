class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int len = words[0].length(), n = s.length();

        map<string, int> m;
        for (auto i : words)
            m[i]++;

        vector<int> idx;
        for (int start = 0; start < len; start++) {
            map<string, int> cp;
            int size = 0;
            for (int i = start; i + len <= n; i += len) {
                string word = s.substr(i, len);

                auto it = m.find(word);
                if (it == m.end()) {
                    cp.clear();
                    size = 0;
                    continue;
                }

                cp[word]++;
                size++;
                while (cp[word] > it->second) {
                    string front = s.substr(i - (size - 1) * len, len);
                    cp[front]--;
                    size--;
                }

                if (size == words.size())
                    idx.push_back(i - (size - 1) * len);
            }
        }
        return vector<int>(idx.begin(), idx.end());
    }
};