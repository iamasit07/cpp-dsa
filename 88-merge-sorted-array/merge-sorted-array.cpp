class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> n1(m);
        for (int i = 0; i < m; i++)
            n1[i] = nums1[i];

        int i = 0, j = 0, x = 0;
        while (i < m and j < n) {
            if (n1[i] < nums2[j])
                nums1[x++] = n1[i++];
            else
                nums1[x++] = nums2[j++];
        }

        if (i < m) {
            while (i < m)
                nums1[x++] = n1[i++];
        } else if (j < n) {
            while (j < n)
                nums1[x++] = nums2[j++];
        }
    }
};