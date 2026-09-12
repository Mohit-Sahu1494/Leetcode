class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
      unordered_set<int>st;

      for(int  x:nums){
        st.insert(x);
      }   
      int ans=original;

      while(st.count(ans)){
        ans=2*ans;
      }
      return ans;
    }
};