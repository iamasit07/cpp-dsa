class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> h(nums.begin(),
                                                         nums.begin() + k);
        for (int i = k; i < nums.size(); i++) {
            if (nums[i] > h.top()) {
                h.pop();
                h.push(nums[i]);
            }
        }

        return h.top();
    }
};