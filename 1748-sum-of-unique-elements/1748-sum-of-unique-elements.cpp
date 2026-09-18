class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      unordered_map<int,int>mp;

      for(int x: nums){
        mp[x]++;
      }

      int ans=0;
      for(auto ele:mp){
        if(ele.second==1){
            ans+=ele.first;
        }
      }
         return ans;
    }
};