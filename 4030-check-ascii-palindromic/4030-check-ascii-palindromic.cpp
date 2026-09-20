class Solution {
public:
    bool isPalindromic(string s) {
        string bits="";
        for(char x:s){
            int asci=int(x);
           while(asci>0){
            bits+=(asci%2)+'0';
            asci/=2;
           }
        }
        bits+='0';
        string x=bits;
        reverse(bits.begin(),bits.end());
        return bits==x;
    }
};