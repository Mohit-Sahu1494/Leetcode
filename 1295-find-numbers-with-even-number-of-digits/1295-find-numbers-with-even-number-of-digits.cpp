class Solution {
public:
  int calculateDigit(int num){
        int count=0;
        while (num>0){
            int digit=num%10;
            count++;
            num/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
           int ans=0;
       for(int i=0;i<nums.size();i++){
        int digits=calculateDigit(nums[i]);
         if(digits%2==0){
            ans++;
         }
       }
       return ans;
    }
};