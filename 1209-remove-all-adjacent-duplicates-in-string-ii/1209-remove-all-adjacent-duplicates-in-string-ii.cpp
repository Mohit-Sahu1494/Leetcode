class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(char ch:s){
            if(!st.empty() &&st.top().first==ch){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({ch,1});
            }
        }
        string ans="";
        while(!st.empty()){
            char str=st.top().first;
            int repeat=st.top().second;
            while(repeat!=0){
                ans+=str;
                repeat--;
            }
         st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};