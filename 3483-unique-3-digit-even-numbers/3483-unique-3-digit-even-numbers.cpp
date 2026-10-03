class Solution {
public:
    void helper(vector<int>&digits,vector<bool>&isVisit,set<int>&st,int count,int nums){
      if(count==3){
        if(nums%2==0){
            st.insert(nums);
        }
        return ;
      }
      for(int i=0;i<digits.size();i++){
        if(isVisit[i])continue;
        if(count==0 && digits[i]==0) continue;
        isVisit[i]=true;
        helper(digits,isVisit,st,count+1,nums*10+digits[i]);
        isVisit[i]=false;
      }
    }

    int totalNumbers(vector<int>&digits){
      vector<bool>isVisit(digits.size(),false);
        set<int>result;
        helper(digits,isVisit,result,0,0);
        return result.size();
    }
};