class Solution {
public:
    bool checkRecord(string s) {
        int p=0;
        int l=0;
        int a=0;

        for(char ch :s){
            if(ch=='A'){
                 a++;
                 l=0;
            }
            else if(ch=='L'){
                l++;
            }
            else{
                l=0;
            }
             if(a>=2 || l>=3){
            return false;
        }
        }
       
        return true;
    }
};