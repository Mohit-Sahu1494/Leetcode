class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";

        for(int i=0;i<chars.size();i++){
            char ch=chars[i];
            int left=i;
            int count=0;
         while(left < chars.size() && ch == chars[left]) {
    count++;
    left++;
}
           ans += ch;
         ans += (count > 1 ? to_string(count) : "");
            i=left-1;
        }
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        return ans.size();
    }
};