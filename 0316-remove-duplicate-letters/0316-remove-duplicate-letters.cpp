class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>freq(26);

        for(char x:s){
            freq[x-'a']++;
        }
        vector<bool>used(26);
        stack<char>st;
        for(char ch:s){
            freq[ch-'a']--;
            if(used[ch-'a']){
                continue;
            }
            while(!st.empty() &&st.top()>ch && freq[st.top()-'a']>0){
            used[st.top()-'a']=false;
            st.pop();
            }
            st.push(ch);
            used[ch-'a']=true;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};