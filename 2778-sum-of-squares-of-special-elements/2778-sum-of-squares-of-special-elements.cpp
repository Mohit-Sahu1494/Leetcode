class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       int ans=0;
       for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
        if(nums.size()%(i+1)==0){
            ans+=nums[i]*nums[i];
        }
       }
       return ans;
    }
};