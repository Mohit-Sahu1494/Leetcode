/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
      let left=0;
      let right=nums.length-1;
      let ans=0;
      while(left<=right){
        let mid= left+Math.floor((right-left)/2);
        if(nums[mid]<=nums[nums.length-1]){
            ans=nums[mid];
            right=mid-1;
        }
        else{
            left=mid+1;
        }

      }

  return ans;
};