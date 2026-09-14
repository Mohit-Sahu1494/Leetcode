class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
          unordered_map<char,int>mp;
        for(char x: s){
         mp[x]++;
         if(mp[x]%2==1){
            count++;
         }
         else{
            count--;
         }
        }
        if(count>1){
            return s.length()-count+1;
        }
        return s.length();
    }
};