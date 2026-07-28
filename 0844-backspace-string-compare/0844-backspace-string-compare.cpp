class Solution {
public:
  string build(string s){
    stack<char>st;
    string ans="";
    for(char ch:s){
        if(ch!='#'){
            st.push(ch);
        }
        else if(!st.empty()){
            st.pop();
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
  } 

    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};