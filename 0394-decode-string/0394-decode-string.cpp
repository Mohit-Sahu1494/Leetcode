class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>stringStack;
        int num=0;
        string curr="";

        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                 numStack.push(num);
                 stringStack.push(curr);
                 curr="";
                 num=0;
            }
           else if(s[i]==']'){
                int repeat=numStack.top();
                numStack.pop();
                string prev=stringStack.top();
                stringStack.pop();

                while(repeat!=0){
                    prev+=curr;
                    repeat--;
                }
                curr=prev;
           }
           else{
            curr+=s[i];
           }
        }
          return curr;
    }
};