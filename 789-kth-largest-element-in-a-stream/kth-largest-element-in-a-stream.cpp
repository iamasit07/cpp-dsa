class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> m;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums)
            add(num);
    }

    int add(int val) {
        if (m.size() < k || m.top() < val) {
            m.push(val);
            if (m.size() > k)
                m.pop();
        }
        return m.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */