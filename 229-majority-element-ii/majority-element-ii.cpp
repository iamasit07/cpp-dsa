class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, p1 = 0, p2 = 2;
        for (auto i : nums) {
            if (cnt1 == 0 && i != p2) {
                cnt1 = 1;
                p1 = i;
            } else if (cnt2 == 0 && i != p1) {
                cnt2 = 1;
                p2 = i;
            } else if (p1 == i)
                cnt1++;
            else if (p2 == i)
                cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for (auto i : nums) {
            if (i == p1)
                cnt1++;
            else if (i == p2)
                cnt2++;
        }
        vector<int> a;
        if (cnt1 > (nums.size() / 3))
            a.push_back(p1);
        if (cnt2 > (nums.size() / 3))
            a.push_back(p2);
        return a;
    }
};