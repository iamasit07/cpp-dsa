class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                a = i;
                b = m[target - nums[i]];
            } else {
                m[nums[i]] = i;
            }
        }
        return {a, b};
    }
};