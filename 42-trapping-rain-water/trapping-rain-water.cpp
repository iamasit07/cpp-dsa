class Solution {
public:
    int trap(vector<int>& height) {
        int lastMax = 0, total = 0;
        int n = height.size();
        for (int i = 0; i < n; i++) {
            if (height[i] >= height[lastMax]) {
                for (int x = lastMax + 1; x < i; x++)
                    total += min(height[lastMax], height[i]) - height[x];
                lastMax = i;
            }
        }

        lastMax = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (height[i] > height[lastMax]) {
                for (int x = lastMax - 1; x > i; x--)
                    total += min(height[lastMax], height[i]) - height[x];
                lastMax = i;
            }
        }

        return total;
    }
};