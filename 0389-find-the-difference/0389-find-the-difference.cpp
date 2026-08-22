class Solution {
public:
    char findTheDifference(string s, string t) {
         unordered_map<char,int>mp;
          for(char ch:s){
             mp[ch]++;
          }
          for(char ch:t){
            if(mp.count(ch)){
                mp[ch]--;
                if(mp[ch]==0){
                    mp.erase(ch);
                }
            }
            else{
                mp[ch]++;
            }
          }
          for(auto it:mp){
            if(it.second>0){
                return it.first;
            }
          }
          return ' ';
    }
};