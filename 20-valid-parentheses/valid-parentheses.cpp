class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (auto i : s) {
            if (i == '(' or i == '{' or i == '[')
                st.push(i);
            else if (st.empty())
                st.push(i);
            else if (i == ')' and st.top() == '(')
                st.pop();
            else if (i == '}' and st.top() == '{')
                st.pop();
            else if (i == ']' and st.top() == '[')
                st.pop();
            else
                st.push(i);
        }
        return st.empty();
    }
};