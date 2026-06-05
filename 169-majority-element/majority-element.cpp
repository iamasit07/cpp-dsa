class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, x = 0;
        for (int i : nums) {
            if (count == 0)
                x = i;

            count += (x == i ? 1 : -1);
        }

        return x;
    }
};