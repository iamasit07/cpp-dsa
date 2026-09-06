class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = speed.size();
        for (int i = n - 1; i > 0; i--) {
            if (abs(position[i - 1] - position[i]) <= distance)
                speed[i - 1] = speed[i];
        }

        stack<int> s;
        for (int i = 1; i < n; i++) {
            if (speed[i - 1] > speed[i])
                continue;
            if (speed[i - 1] <= speed[i] and
                abs(position[i - 1] - position[i]) <= distance)
                continue;
            while (!s.empty() and s.top() > speed[i - 1])
                s.pop();
            s.push(speed[i - 1]);
        }

        while (!s.empty() and s.top() > speed[n - 1])
            s.pop();

        return s.size() + 1;
    }
};