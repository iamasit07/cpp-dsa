class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string s = "";
        for (auto i : path) {
            if (i == '/') {
                if (s.empty())
                    continue;
                else if (s == "..") {
                    if (!st.empty())
                        st.pop();
                    s = "";
                } else if (s == ".")
                    s = "";
                else {
                    st.push(s);
                    s = "";
                }
            } else
                s += i;
        }

        if (!s.empty()) {
            if (s == "..") {
                if (!st.empty())
                    st.pop();
                s = "";
            } else if (s == ".")
                s = "";
            else
                st.push(s);
        }

        string ans = "";
        while (!st.empty()) {
            cout << st.top() << " ";
            ans = '/' + st.top() + ans;
            st.pop();
        }

        return (ans.length() == 0 ? "/" : ans);
    }
};