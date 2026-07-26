class Solution {
private:
    long long MOD = 1e9 + 7;
    long long binpow(long long a, long long b, long long m) {
        a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = (res * a) % m;
            a = (a * a) % m;
            b >>= 1;
        }
        return res;
    }

    long long comb(int n, int k) {
        if (k < 0 || k > n)
            return 0;
        k = min(k, n - k);
        long long res = 1, den = 1;
        for (int i = 1; i <= k; ++i) {
            res = res * (n - i + 1) % MOD;
            den = den * i % MOD;
        }
        return res * binpow(den, MOD - 2, MOD) % MOD;
    }

public:
    int countValidSequences(int n, int k) {
        long long total = comb(n - 1, k - 1);
        if ((n & 1) == (k & 1))
            return (total - comb((n + k) / 2 - 1, k - 1) + MOD) % MOD;
        return total % MOD;
    }
};