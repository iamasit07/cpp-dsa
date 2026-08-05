class Solution {
public:
    bool isHappy(int n) {
        map<int, int> m;
        for (int i = 0; i <= 9; i++)
            m[i] = i * i;

        set<int> s;
        while (n > 1) {
            if (s.count(n))
                return false;
            else
                s.insert(n);

            int sum = 0;
            for (int i = n; i > 0; i /= 10)
                sum += m[i % 10];

            n = sum;
            cout << n << " ";
        }
        return true;
    }
};