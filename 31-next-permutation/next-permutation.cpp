class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool isTrue = next_permutation(nums.begin(), nums.end());
        if (!isTrue)
            sort(nums.begin(), nums.end());
    }
};