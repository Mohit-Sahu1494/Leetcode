class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
               int point =s[i] - 'a' + 1;
         int c=27-point;
         ans+=c*(i+1);
        } 
        return ans;
    }
};