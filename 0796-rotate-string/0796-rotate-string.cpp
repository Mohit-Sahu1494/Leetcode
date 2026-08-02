class Solution {
public:
    bool rotateString(string s, string goal) {
        int index=0;
         
         while(index!=s.length()){
            string target1=s.substr(0,index);
            string str=s.substr(index,s.length());
            str=str+target1;
            if(str==goal){
                return true;
            }
            index++;
         }
         return false;
    }
};