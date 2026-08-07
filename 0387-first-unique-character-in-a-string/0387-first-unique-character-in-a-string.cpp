class Solution {
public:
    int firstUniqChar(string s) {
          vector<int>freq(26,0);
          queue<char>q;

          for(char ch:s){
            freq[ch-'a']++;
            q.push(ch);
            while(!q.empty() && freq[q.front()-'a']>1){
                q.pop();
            }
          }
          if(q.empty()) return -1;

           char ans=q.front();
           for(int i=0;i<s.length();i++){
            if(s[i]==ans) return i;
           }
           return -1;
    }
};