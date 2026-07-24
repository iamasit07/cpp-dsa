class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        if (n == 1) {
            if (gas[0] < cost[0])
                return -1;
            return 0;
        }

        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (gas[i] <= cost[i])
                continue;
            int itr = (i + 1) % n, f = gas[i] - cost[i];
            bool flg = true;
            while (itr != i) {
                if (f <= 0) {
                    flg = false;
                    break;
                }
                f += gas[itr] - cost[itr];
                itr = (itr + 1) % n;
            }

            if (f < 0)
                flg = false;

            if (flg) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};