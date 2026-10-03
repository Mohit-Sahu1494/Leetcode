class Solution {
public:
    void concanateDigit(vector<int>&digit,set<int>&ans,vector<bool>&isVisit,int count,int number){
        if(count==3){
            if(number%2==0){
                ans.insert(number);
            }
            return ;
        }
        for(int i=0;i<digit.size();i++){
            if(isVisit[i]){
                continue;
            }
            if(count==0 && digit[i]==0){
                continue;
            }
            isVisit[i]=true;
            concanateDigit(digit,ans,isVisit,count+1,number*10+digit[i]);
            isVisit[i]=false;
        }

    }
    vector<int> findEvenNumbers(vector<int>& digits) {
         set<int>ans;
         vector<int>result;
          vector<bool>isVisit(digits.size(),false);
           concanateDigit(digits,ans,isVisit,0,0);
           for(auto it:ans){
            result.push_back(it);
           }
           sort(result.begin(),result.end());
           return result;
    }
};