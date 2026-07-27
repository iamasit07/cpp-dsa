class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(), total = n;
        if (n == 1)
            return 1;
        multimap<int, int> m;
        vector<int> a(n, 1);
        for (int i = 0; i < n; i++)
            m.insert({ratings[i], i});

        for (auto [x, y] : m) {
            int val = INT_MIN;
            if (y == 0 and ratings[y] > ratings[y + 1])
                val = max(val, a[y + 1]);
            else if (y == n - 1 and ratings[y] > ratings[y - 1])
                val = max(val, a[y - 1]);
            else if (y > 0 and y < n - 1) {
                if (ratings[y] > ratings[y + 1])
                    val = max(val, a[y + 1]);
                if (ratings[y] > ratings[y - 1])
                    val = max(val, a[y - 1]);
            }
            if (val != INT_MIN) {
                total += val;
                a[y] = val + 1;
            }
        }

        return total;
    }
};