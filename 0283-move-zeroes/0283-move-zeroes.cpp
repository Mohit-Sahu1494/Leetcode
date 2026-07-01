class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
               bool swaping=false;
            for(int j=0;j<nums.size()-i-1;j++){
             
                if(nums[j]==0 && nums[j+1]!=0){
                    swaping=true;
                    swap(nums[j],nums[j+1]);
                }
            }
            if(!swaping){
                return;
            }

        }
    }
};