class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), leftMax = 0, rightMax = 0;
        int left = 0, right = n - 1, total = 0;
        while (left < right) {
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);

            if (leftMax < rightMax)
                total += leftMax - height[left++];
            else
                total += rightMax - height[right--];
        }

        return total;
    }
};