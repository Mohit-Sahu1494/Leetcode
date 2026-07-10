class Solution {
public:

   int pivotIndex(vector<int>& nums,int left,int right){
    int pivot=nums[right];
    int i=left-1;
    
    for(int j=left;j<right;j++){
        if(nums[j]<pivot){
            i++;
            swap(nums[j],nums[i]);
        }
    }
     swap(nums[i+1],nums[right]);
     return i+1;
   }
   void quickSort(vector<int>& nums,int left,int right){
    if (left >= right)
    return;
       int pivot=pivotIndex(nums,left,right);
       quickSort(nums,left,pivot-1);
       quickSort(nums,pivot+1,right);
   }

    void sortColors(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);  
    }
};