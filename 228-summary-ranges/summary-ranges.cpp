class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        if (n == 0)
            return ans;

        int left = 0, right = 1;
        int lastval = nums[0];
        while (right < n) {
            if (lastval + 1 == nums[right])
                lastval = nums[right];
            else {
                string s = "";
                if (left + 1 == right)
                    s = to_string(nums[left]);
                else
                    s = to_string(nums[left]) + "->" + to_string(lastval);
                ans.push_back(s);
                left = right;
                lastval = nums[right];
            }
            right++;
        }

        string s = "";
        if (left + 1 == right)
            s = to_string(nums[left]);
        else
            s = to_string(nums[left]) + "->" + to_string(lastval);
        ans.push_back(s);

        return ans;
    }
};