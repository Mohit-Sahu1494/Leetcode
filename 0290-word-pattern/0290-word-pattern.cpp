class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>rev;
        string words="";
        int index=0;
           s+=' ';
         for(char ch:s){
            if(ch==' '){
                if(mp.count(pattern[index])){
                    if(mp[pattern[index]]!=words){
                          return false;
                    }   
                }
                else if(rev.count(words)){
                        return false;
                    }
                else{
                 mp[pattern[index]]=words;
                 rev[words]=pattern[index];
                }
                index++;
                    words="";
            }
            else{
                words+=ch;
            }
         }
         if(index!=pattern.length()) return false;
        
         return true;
    }
};