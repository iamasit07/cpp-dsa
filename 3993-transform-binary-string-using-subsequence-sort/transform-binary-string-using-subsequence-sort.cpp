class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.length(), cnt0 = 0;
        vector<int> pf;
        for (auto i : s) {
            cnt0 += (i == '0');
            pf.push_back(cnt0);
        }

        vector<bool> ans;
        for (auto st : strs) {
            int flg = 0;
            int ct0 = 0, ctq = 0;
            for (auto x : st) {
                ct0 += (x == '0');
                ctq += (x == '?');
            }

            if (ct0 > cnt0 or (ct0 + ctq) < cnt0) {
                ans.push_back(false);
                continue;
            }

            int needed = cnt0 - ct0;

            ct0 = 0;
            for (int i = 0; i < n; i++) {
                ct0 += (st[i] == '0');
                if (st[i] == '?' and needed > 0) {
                    needed--;
                    ct0++;
                }
                
                if (ct0 < pf[i]) {
                    flg = 1;
                    break;
                }
            }

            if (flg)
                ans.push_back(false);
            else
                ans.push_back(true);
        }

        return ans;
    }
};