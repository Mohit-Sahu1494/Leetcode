class Solution(object):
    def findMin(self, nums):
        left=0
        right=len(nums)-1
        ans=0
        while left<=right:
            mid=left+(right-left)//2
            if nums[mid]<= nums[len(nums)-1]:
                ans=nums[mid]
                right=mid-1
            else :
                left=mid+1
            
        return ans
        