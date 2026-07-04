class Solution {
public:
   
    int binarySearch(vector<int>& nums,int left, int right,int target){
        int mid= left+(right-left)/2;
          if(left>right) return -1;
          if(nums[mid]==target){
            return mid;
          }
          else if(nums[mid]>target){
              return binarySearch(nums,left,mid-1,target);
          }
          else{
             return binarySearch(nums,mid+1,right,target);
          }
    }
   
    int search(vector<int>& nums, int target) {
        //   function call of bianry search
            return binarySearch(nums,0,nums.size()-1,target);
    }
};