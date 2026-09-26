class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
         unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                int index=i+1;
                string word="";
                while(s[index]!=')'){
                  word+=s[index++];

                }
                if(mp.count(word)){
                    ans+=mp[word];
                }
                else{
                    ans+="?";
                }
               i=index; 
            }
            else{
                ans+=ch;
            }
        }
        return ans;
    }
};