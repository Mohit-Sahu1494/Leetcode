class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
         int i=0;
         bool found=false;

        for(i=0;i<word.length();i++){
            if(word[i]==ch){
                i++;
                found=true;
               break;
            }
        }
        if(!found) return word;
        for(int j=0;j<i;j++){
            st.push(word[j]);
        }
        for(int j=0;j<i;j++){
            word[j]=st.top();
            st.pop();
        }
        return word;
    }
};