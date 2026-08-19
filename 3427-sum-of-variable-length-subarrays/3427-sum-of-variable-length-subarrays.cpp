class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>prefix(nums.size());
        
        int sum=0;
            prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
             prefix[i]=nums[i]+prefix[i-1];
        }
        for(int i=0;i<nums.size();i++){
             int start=max(0,i-nums[i]);
             if(start>=1){
                sum+=prefix[i]-prefix[start-1];
             }
             else{
                sum+=prefix[i];
             }
}    
  return sum;
}
};