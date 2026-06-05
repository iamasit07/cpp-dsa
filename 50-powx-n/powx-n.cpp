class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;

        if (n == 1)
            return x;

        long long pow = abs(1LL * n);
        double ans = 1;

        if (n < 0) {
            x = 1 / x;
            while (pow > 0) {
                if (pow & 1)
                    ans *= x;

                x *= x;
                pow >>= 1;
            }
        } else {
            while (n > 0) {
                if (n & 1)
                    ans *= x;

                x *= x;
                n >>= 1;
            }
        }

        return ans;
    }
};