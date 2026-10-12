class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()){
            return s;
        }
        vector<string>ans(numRows);
        int currentRow=0;
        int direction=1;
        for(char ch:s){
            ans[currentRow]+=ch;
            if(currentRow==0){
                direction=1;
            }
            else if(currentRow==numRows-1){
                direction=-1;
            }
            currentRow+=direction;
        }
        string res;
        for(string str:ans){
            res+=str;
        }
        return res;
    }
};