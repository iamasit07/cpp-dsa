class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = -1, e = -1, ans = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            if (s == -1 or prices[i] < prices[s]) {
                s = i;
                e = -1;
            }
            if (s != -1 and (e == -1 or prices[i] > prices[e]))
                e = i;

            ans = max(ans, prices[e] - prices[s]);
        }
        return (ans == INT_MIN ? 0 : ans);
    }
};