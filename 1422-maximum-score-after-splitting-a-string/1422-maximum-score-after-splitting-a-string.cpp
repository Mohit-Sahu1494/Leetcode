class Solution {
public:
    int maxScore(string s) {
        int countZero=0;
        int countOne=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                countOne++;
            }
        }
        int maxi=0;
          for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1'){
                countOne--;
            }
            else{
  countZero++; 
            }
          
            maxi=max(maxi,countZero+countOne);
          }
          return maxi;
    }
};