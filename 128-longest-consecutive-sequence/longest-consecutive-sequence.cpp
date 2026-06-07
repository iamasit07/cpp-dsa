class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto i:nums)
            s.insert(i);

        if(nums.size() == 0)
            return 0;
        int lar = 1;
        for(auto i :s){
            if(s.find(i-1) == s.end()){
                int cnt = 1;
                int x = i;
                while(s.find(x + 1) != s.end()){
                    x++;
                    cnt++;
                }
                lar = max(lar, cnt);
            }
        }
        return lar;
    }
};