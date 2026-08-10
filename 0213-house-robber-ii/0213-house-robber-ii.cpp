class Solution {
public:
    int robbler(vector<int>& arr, int left,int right){
     int prev1=0;
     int prev2=0;
        for(int i=left;i<=right;i++){
            int curr=max(prev1,prev2+arr[i]);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
     int case1=robbler(nums,0,n-2);
     int case2=robbler(nums,1,n-1);
     return max(case1,case2);    
    }
};