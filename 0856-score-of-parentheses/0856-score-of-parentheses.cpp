class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int count=0;
        st.push(0);
        for(char ch:s){
            if(ch=='('){
                st.push(0);
            }
            else if(ch==')'){
                
                 int inside=st.top();
                 st.pop();
                 int score=0;
                 if(inside==0){
                    score=1;
                 }
                 else{
                    score=2*inside;
                 }
                 st.top()+=score;
            }
        }
        return st.top();
    }
};