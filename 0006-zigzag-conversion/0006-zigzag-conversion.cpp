class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
    return s;
}
        vector<string>ans(numRows);
        int currentRows=0;
        int direction=1;
        for(char ch:s){
            ans[currentRows]+=ch;
              if(currentRows==0){
                direction=1;
              }
              else if(currentRows==numRows-1){
                   direction=-1;
              }
              currentRows+=direction;
        }
       string res="";
       for(string str:ans){
        res+=str;
       }
       return res;
    }
};