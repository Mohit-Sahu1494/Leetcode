class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int max1=INT_MIN;
       int max2=INT_MIN;
        int index=0;
       for(int i=0;i<nums.size();i++){
          if(max1<nums[i]){
           max2=max1;
           max1=nums[i];
           index=i;
          }
         else if(max2<nums[i]){
            max2=nums[i];
          }

       }
       if(max2*2<=max1){
        return index;
       }
       return -1;
    }
};