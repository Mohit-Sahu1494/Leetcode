class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int minSum=0;
         for(int x:nums){
            sum+=x;
            minSum=min(minSum,sum);
         }
         return 1-minSum;
    }
};