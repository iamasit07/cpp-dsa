class MinStack {
private:
    vector<int> st;
    multiset<int> s;

public:
    MinStack() {}

    void push(int value) {
        st.push_back(value);
        s.insert(value);
    }

    void pop() {
        s.erase(s.find(st.back()));
        st.pop_back();
    }

    int top() { return st.back(); }

    int getMin() { return *s.begin(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */