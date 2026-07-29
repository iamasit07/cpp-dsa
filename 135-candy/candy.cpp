class Solution {
public:
    int candy(vector<int>& ratings) {
        int up = 0, down = 0, peak = 0;
        int total = 1, n = ratings.size();
        for (int i = 1; i < n; i++) {
            if (ratings[i] == ratings[i - 1]) {
                up = 0;
                down = 0;
                peak = 0;
                total++;
            } else if (ratings[i] > ratings[i - 1]) {
                up++;
                down = 0;
                peak = up + 1;
                total += peak;
            } else {
                up = 0;
                down++;
                total += down;
                if (down >= peak)
                    total++;
            }
        }
        return total;
    }
};