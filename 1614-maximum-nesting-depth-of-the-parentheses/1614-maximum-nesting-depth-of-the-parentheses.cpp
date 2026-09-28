class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        stack<int>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(ch);
                count++;
            }
            else if(ch==')'){
                maxi=max(count,maxi);
                count--;
                st.pop();
            }
        }
        return maxi;
        
    }
};