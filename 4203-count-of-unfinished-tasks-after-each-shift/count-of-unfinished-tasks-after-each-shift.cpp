class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = shifts.size(), m = tasks.size();
        vector<long long> task(tasks.begin(), tasks.end());
        for (int i = 1; i < m; i++)
            task[i] += task[i - 1];

        vector<int> ans;
        long long total = 0;
        for (int x : shifts) {
            total += x;
            int it =
                upper_bound(task.begin(), task.end(), total) - task.begin();
            if (it == m) {
                ans.push_back(0);
                total = 0;
            } else
                ans.push_back(m - it);
        }

        return ans;
    }
};