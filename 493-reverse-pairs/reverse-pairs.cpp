class Solution {
public:
    void merge(vector<int>& nums , int low , int mid , int high) {
        vector<int> t;
        int left = low;
        int right = mid + 1;

        while(left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                t.push_back(nums[left]);
                left++;
            }
            else {
                t.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid) {
            t.push_back(nums[left]);
            left++;
        }
        while(right <= high) {
            t.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = t[i - low];
        }
    }

    int cntPairs(vector<int>& nums , int low , int mid , int high) {
        int right = mid + 1;
        int cnt = 0;

        for (int i = low; i <= mid; i++) {
            while(right <= high && (long long)nums[i] > 2LL * nums[right]) right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(vector<int>& nums , int low , int high) {
        int cnt = 0;
        if (low >= high) return cnt;
        int mid = low + (high - low) / 2;

        cnt += mergeSort(nums , low , mid);
        cnt += mergeSort(nums , mid + 1 , high);
        cnt += cntPairs(nums , low , mid , high);

        merge(nums , low , mid , high);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums , 0 , nums.size() - 1);
    }
};