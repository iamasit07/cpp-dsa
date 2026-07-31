class Solution {
public:
    int maxArea(vector<int>& height) {
        int total = 0, n = height.size();
        int left = 0, right = n - 1;
        while (left < right) {
            int vol = min(height[left], height[right]) * (right - left);
            if (total < vol)
                total = vol;
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return total;
    }
};