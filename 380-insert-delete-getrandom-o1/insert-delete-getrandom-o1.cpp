class RandomizedSet {
private:
    vector<int> a;
    unordered_map<int, int> m;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (m.find(val) == m.end()) {
            m[val] = a.size();
            a.push_back(val);
            return true;
        }

        return false;
    }

    bool remove(int val) {
        if (m.find(val) == m.end())
            return false;

        auto it = m.find(val);
        a[it->second] = a.back();
        a.pop_back();
        m[a[it->second]] = it->second;
        m.erase(val);
        return true;
    }

    int getRandom() { return a[rand() % a.size()]; }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */