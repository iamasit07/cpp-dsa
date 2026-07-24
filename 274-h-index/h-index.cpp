class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int ans = citations[0], n = citations.size(), count = 0;
        for (int i = 0; i < n; i++) {
            if (min(ans, citations[i]) >= (i + 1) and min(ans, citations[i]) != 0) {
                ans = min(ans, citations[i]);
                count = i + 1;
                continue;
            } else
                break;
        }

        return count;
    }
};