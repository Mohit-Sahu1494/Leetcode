class Solution {
public:
    string clearDigits(string s) {
         stack<char>st;

         for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                st.push(s[i]);
            }
            else{
                if(!st.empty()) st.pop();
            }
         }
         string str="";
         while(!st.empty()){
            str+=st.top();
            st.pop();
         }
         reverse(str.begin(),str.end());
         return str;
    }

};