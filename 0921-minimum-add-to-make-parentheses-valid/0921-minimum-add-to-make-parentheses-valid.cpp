class Solution {
public:
    int minAddToMakeValid(string s) {
          stack<char>st;
       for(char ch:s){
          if(ch=='('){
            st.push(ch);
          }
          else {
             if(!st.empty() && ch==')'&&st.top()=='('){
                st.pop();
             }
             else{
                st.push(ch);
             }
       }
    }
    int count=0;
    while(!st.empty()){
       count++;
       st.pop();
    }
    return count; 
    }
};