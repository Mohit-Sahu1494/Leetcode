class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string curr = "";

        for (char ch : s) {

            if (ch == '(') {
                // Current string ko save karo
                st.push(curr);
                curr = "";
            }
            else if (ch == ')') {
                // Current substring reverse karo
                reverse(curr.begin(), curr.end());

                // Previous string ke saath jod do
                curr = st.top() + curr;
                st.pop();
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};