class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
         vector<int>ans;
     for(int i=left;i<=right;i++){
        int num=i;
        bool selfDivide=true;
        while(num>0){
            int digit=num%10;
             if(digit==0){
                selfDivide=false;
             }
            else if(i%digit!=0){
                selfDivide=false;
            }
            num/=10;
        }
        if(selfDivide){
             ans.push_back(i);
        }
     }
     return ans;
    }
};