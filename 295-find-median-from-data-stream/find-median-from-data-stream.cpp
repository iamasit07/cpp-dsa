class MedianFinder {
private:
    multiset<double> lower_half, upper_half;

public:
    MedianFinder() {}

    void addNum(int num) {
        if (lower_half.empty() or num <= *lower_half.rbegin())
            lower_half.insert(num);
        else
            upper_half.insert(num);

        if (lower_half.size() > upper_half.size() + 1) {
            auto it = prev(lower_half.end());
            upper_half.insert(*it);
            lower_half.erase(it);
        } else if (upper_half.size() > lower_half.size()) {
            auto it = upper_half.begin();
            lower_half.insert(*it);
            upper_half.erase(it);
        }
    }

    double findMedian() {
        if (lower_half.size() > upper_half.size())
            return *lower_half.rbegin();
        else
            return (*lower_half.rbegin() + *upper_half.begin()) / 2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */