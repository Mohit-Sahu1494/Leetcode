class Solution {
public:
 int gcd(int a,int b){
     while(b!=0){
        int rem=a%b;
    a=b;
    b=rem;
     }
     return a;
 }
    int findGCD(vector<int>& nums) {
         int small=INT_MAX;
         int large=INT_MIN;

         for(int i=0;i<nums.size();i++){
            large=max(large,nums[i]);
            small=min(small,nums[i]);
         }
        return gcd(large,small);   
    }
};