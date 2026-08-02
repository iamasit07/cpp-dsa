class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int m = tasks.size();
        vector<long long> task(m);
        task[0] = tasks[0];
        for (int i = 1; i < m; i++)
            task[i] = task[i - 1] + tasks[i];

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