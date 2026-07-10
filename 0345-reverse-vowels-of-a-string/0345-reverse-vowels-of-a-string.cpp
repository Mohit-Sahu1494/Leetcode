class Solution {
public:
    
    bool isVowel(char ch) {
    ch = tolower(ch);

    return ch == 'a' ||
           ch == 'e' ||
           ch == 'i' ||
           ch == 'o' ||
           ch == 'u';
}
    string reverseVowels(string s) {
        
        int left=0;
        int right=s.length()-1;
   
        while(left<right){
            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isVowel(s[left])){
                left++;
            }
            else {
                right--;
            }
        }
        return s;
    }
};