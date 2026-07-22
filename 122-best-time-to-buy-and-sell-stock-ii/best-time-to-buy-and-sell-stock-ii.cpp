class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int st = 0, ed = 0, ans = 0;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            if (prices[i] >= prices[ed])
                ed = i;
            else {
                ans += prices[ed] - prices[st];
                st = i;
                ed = i;
            }
        }

        if (st != ed)
            ans += prices[ed] - prices[st];

        return ans;
    }
};